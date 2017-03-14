<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                12.03.17
 * @version             0.1
 * @copyright           artmares@influ.su
 */
namespace Components\Pages\Create;
use Components\Custom\BackBtn;
use Components\Custom\NextBtn;
use PQ\QtObject;
use PQ\WidgetsInterface;

class Template extends \QFrame implements WidgetsInterface {
    use QtObject;
    
    public $ui = [];
    
    public function initComponents() {
        
        $labelTemplate = new \QLabel($this);
        $labelTemplate->text = tr('Application Template') . ':';
        
        $this->ui['listTemplate'] = new \QListWidget();
        $this->ui['listTemplate']->setIconSize(new \QSize(32, 32));
        foreach($this->core->storage->appTemplates as $t) {
            $iconPath = $this->core->APP_PATH . $t['icon'] == '' ? 'img/icons/unknown.png' : 'templates/'.$t['path'].'/'.$t['icon'];
            $this->ui['listItems'][] = new \QListWidgetItem(new \QIcon($iconPath), tr($t['name']), $this->ui['listTemplate']);
        }
        $this->ui['listTemplate']->onCurrentRowChanged = function($sender, $index) {
            var_dump(is_object($this->ui['description']));
            if(is_object($this->ui['description'])) {
                if (isset($this->core->storage->appTemplates[$index])) {
                    $this->ui['description']->text = tr($this->core->storage->appTemplates[$index]['description']);
                } else {
                    $this->ui['description']->text = '';
                }
            }
        };

        $labelDescription = new \QLabel($this);
        $labelDescription->text = tr('Description') . ':';

        $this->ui['description'] = new \QLabel($this);
        $this->ui['description']->wordWrap = true;

        $this->ui['BackBtn'] = new BackBtn($this, tr('Back'));
        $this->ui['BackBtn']->onClicked = function() {
            $this->core->widgets->get('Components/Pages/Create')->prev();
        };

        $this->ui['NextBtn'] = new NextBtn($this, tr('Create'));
        $this->ui['NextBtn']->onClicked = function($sender) {
            $this->core->widgets->get('Components/Pages/Create')->next();
            $this->core->widgets->get('Components/Widgets/Welcome')->Back();
        };

        $this->setLayout(new \QGridLayout());

        $row = 0;

        $this->layout()->addWidget($labelTemplate, $row, 0, 1, 2);
        $this->layout()->addWidget($labelDescription, $row, 2, 1, 2);

        $row++;
        $this->layout()->addWidget($this->ui['listTemplate'], $row, 0, 1, 2);
        $this->layout()->addWidget($this->ui['description'], $row, 2, 1, 2);

        /** Добавляем основные кнопки */
        $row++;
        $this->layout()->addWidget($this->ui['BackBtn'], $row, 0);
        $this->layout()->setAlignment($this->ui['BackBtn'], \Qt::AlignBottom | \Qt::AlignLeft);
        $this->layout()->addWidget($this->ui['NextBtn'], $row, 3);
        $this->layout()->setAlignment($this->ui['NextBtn'], \Qt::AlignRight | \Qt::AlignBottom);
    }

//    public function __destruct() {
//        qDebug(__METHOD__);
//        $this->ui['listTemplate']->free();
//        $this->ui['description']->free();
//    }
}