#include "recorder.hh"
#include <iostream>
#include <sys/stat.h>
#include <string>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <assert.h>
Recorder::Recorder()
{
  fichiers = new vector<pair<string, ofstream*> >();
}

Recorder::Recorder(std::string	folder,
                   int traceLevel)
{
  _folder = folder+_getCurrentDateTime()+"/";
  int temp = umask(0);
  if ( (temp = mkdir(_folder.c_str(),  (S_IRWXU | S_IRWXG | S_IRWXO))!=0) ){
    cerr << "bad path file no such directory (save=)\n" << endl;
    assert(1==0);
  }
  _traceLevel = traceLevel;
  fichiers = new vector<pair<string, ofstream*> >();
}

Recorder::~Recorder()
{
  vector<pair<string, ofstream*> >::iterator	i;

  i = fichiers->begin();

  for (; i != fichiers->end(); ++i)
    ((*i).second)->close();
  delete fichiers;
}

void	Recorder::AddFile(std::string	filename)
{
  std::string	path = _folder + filename;
  ofstream *fichier = new ofstream(path.c_str());  //déclaration du flux et ouverture du fichier

  if (fichier)  // si l'ouverture a réussi
    {
      pair<string, ofstream*>	p;

      p.first = filename;
      p.second = fichier;

      fichiers->push_back(p);
    }
  else  // sinon
    cerr << "Erreur à l'ouverture !" << endl;
}

void	Recorder::Save(string data,
		       string filename)
{
  vector<pair<string, ofstream *> >::iterator	i;

  i = fichiers->begin();

  for (; i != fichiers->end(); ++i)
    {
      if (filename.compare((*i).first) == 0)
	{
	  *((*i).second) << data << std::endl;
	}
    }
}

void Recorder::Save(string data,
                    string filename,
                    int traceLevel)
{
  if (traceLevel <= _traceLevel)
    Save(data, filename);
  if (_traceLevel == 10)
    cout << data << endl;
}


void	Recorder::Save(vector<float>* data,
		       string filename)
{
  vector<pair<string, ofstream *> >::iterator	i;
  vector<float>::iterator			j;

  i = fichiers->begin();

  for (; i != fichiers->end(); ++i)
    {
      if (filename.compare((*i).first) == 0)
	{
	  j = data->begin();
	  // FIXME
	  for (int index = 0; j != data->end() && index < 15; ++j, ++index)
	    {
	      *((*i).second) << *j << std::endl;
	    }
	}
    }
}


void Recorder::Save(double data,
                    string filename)
{
  vector<pair<string, ofstream *> >::iterator	i;

  i = fichiers->begin();

  for (; i != fichiers->end(); ++i)
    {
      if (filename.compare((*i).first) == 0)
	{
	  *((*i).second) << data << std::endl;
	}
    }
}

// Cette fonction est utilisee pour enregistrer le fichier Eye
void	Recorder::Save(vector<pair<double, double> >* data,
		       string filename)
{
  vector<pair<string, ofstream *> >::iterator	i;
  vector<pair<double, double> >::iterator		j;

  i = fichiers->begin();

  for (; i != fichiers->end(); ++i)
    {
      if (filename.compare((*i).first) == 0)
	{
	  j = data->begin();
	  int	index = 0;
	  for (; j != data->end(); ++j, ++index)
	    {
	      *((*i).second) << (*j).first << " " << (*j).second << std::endl;
	      // Modification pour eviter le flush induit par std::endl;
	      //*((*i).second) << (*j).first << " " << (*j).second << "\n";
	    }
	}
    }
}

void	Recorder::Save(pair<double, double>	*j,
		       string			filename)
{
  vector<pair<string, ofstream *> >::iterator	i;

  i = fichiers->begin();

  for (; i != fichiers->end(); ++i)
    {
      if (filename.compare((*i).first) == 0)
	{
	  *((*i).second) << (*j).first << " " << (*j).second << std::endl;
	}
    }
}

void	demo_save(void	*arg)
{
  // Cette fonction Xenomai prend un argument qui doit etre un :
  // pair<vector<pair<string, ofstream *> >::iterator, pair<double, double> >
  pair<vector<pair<string, ofstream *> >::iterator, pair<double, double> > *tmp = (pair<vector<pair<string, ofstream *> >::iterator, pair<double, double> > *)arg;
  //std::cout << "Save" << std::endl;
  vector<pair<string, ofstream *> >::iterator	i = tmp->first;
  pair<double, double>	data = tmp->second;

  *((*i).second) << (data).first << " " << (data).second << std::endl; // TROP LENT MEME AVEC RAMDISK
}

// Get current date/time, format is YYYY-MM-DD.HH:mm:ss
std::string
Recorder::_getCurrentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}
