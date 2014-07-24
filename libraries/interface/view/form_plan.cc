#include "form_plan.hh"
#include "controller.hh"

FormPlan::FormPlan(QWidget *parent, Controller *c, QVBoxLayout *parentLayout)
  : FormShape(parent, c, parentLayout)
{
  _type = new QString("Plan");
  
  _minStart = new QLabel("Random min:");
  _maxStart = new QLabel("Random max:");
  _x = new QLabel("Position x:");
  _y = new QLabel("Position y:");
  _width = new QLabel("Largeur:");
  _height = new QLabel("Longueur:");
  _repeat = new QLabel("Répétition de la texture");

  _nameField->setText("Plan");
  _frameStartField->setText("0");
  _frameEndField->setText("-1");

  _minStartField = new QLineEdit("0");
  _maxStartField = new QLineEdit("0");
  _xField = new QLineEdit("0");
  _yField = new QLineEdit("0");
  _widthField = new QLineEdit("40");
  _heightField = new QLineEdit("80");
  _repeatField = new QLineEdit("80");

  _layout->addWidget(_minStart,3,0);
  _layout->addWidget(_minStartField,3,1);
  _layout->addWidget(_maxStart,4,0);
  _layout->addWidget(_maxStartField,4,1);
  _layout->addWidget(_x,5,0);
  _layout->addWidget(_xField,5,1);
  _layout->addWidget(_y,6,0);
  _layout->addWidget(_yField,6,1);
  _layout->addWidget(_width,7,0);
  _layout->addWidget(_widthField,7,1);
  _layout->addWidget(_height,8,0);
  _layout->addWidget(_heightField,8,1);
  _layout->addWidget(_repeat,9,0);
  _layout->addWidget(_repeatField,9,1);
  _layout->addWidget(_submit,10,0,1,2);

  Init();
}

FormPlan::~FormPlan()
{
 
}

void 
FormPlan::Init()
{
  connect(_submit, SIGNAL(clicked()), this, SLOT(_save()));
}

void
FormPlan::_save()
{

  if (_controller->getIndexTrial() >= 0 )
    {
      vector<TrialInfo>* trials = &_controller->sessionInfo->trials;
      TrialInfo* ti = &trials->at(_controller->getIndexTrial());
      ShapeInfo si;

      si.name =  _type->toUtf8().constData();
      si.attributes.push_back(_nameField->text().toUtf8().constData());
      si.attributes.push_back(_minStartField->text().toUtf8().constData());
      si.attributes.push_back(_maxStartField->text().toUtf8().constData());
      si.attributes.push_back(_xField->text().toUtf8().constData());
      si.attributes.push_back(_yField->text().toUtf8().constData());
      si.attributes.push_back(_frameStartField->text().toUtf8().constData());
      si.attributes.push_back(_frameEndField->text().toUtf8().constData());
      si.attributes.push_back(_widthField->text().toUtf8().constData());
      si.attributes.push_back(_heightField->text().toUtf8().constData());
      si.attributes.push_back(_repeatField->text().toUtf8().constData());

      std::cout << "add plan" << std::endl;
      if (_index!=-1)
	{
	  std::cout << "Je dois remplacer " << _index << std::endl;
	  ti->shapes.at(_index) = si;
	  _index=-1;
	}
      else
	{
	  std::cout << "add normal" << std::endl;
	  ti->shapes.push_back(si);
	}
      FormShape::_save();
    }
  else{
    std::cout << "pas de session selectionnééée" << std::endl;
  }
}
void
FormPlan::fillForm(ShapeInfo* si, int index)
{
   _index = index;
  std::cout << "fill form index " << _index << std::endl;
  QString str;
  _nameField->setText(str = si->attributes[0].c_str());
  _minStartField->setText(str = si->attributes[1].c_str());
  _maxStartField->setText(str = si->attributes[2].c_str());
  _xField->setText(str = si->attributes[3].c_str());
  _yField->setText(str = si->attributes[4].c_str());
  _frameStartField->setText(str = si->attributes[5].c_str());
  _frameEndField->setText(str = si->attributes[6].c_str());
  _widthField->setText(str = si->attributes[7].c_str());
  _heightField->setText(str = si->attributes[8].c_str());
  _repeatField->setText(str = si->attributes[9].c_str());
}
