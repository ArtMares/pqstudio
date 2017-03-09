<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                03.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom;
use PQ\Core;
use Components\Custom\Events;

class CheckBox extends IconBtn {

    protected $eventFilter;

    protected $iconSize = 18;

    public function __construct($parent, $text, $check = false) {
        /** Задаем иконку в зависимости от аргумента $check */
        $this->icon = Core::getInstance()->icon->font(($check ? 'fa-check-square-o' : 'fa-square-o'), $this->iconSize);

        /** Вызываем конструктор родителя и передаем необходимые аргументы */
        parent::__construct($parent, $this->icon, $text);

        $this->eventFilter = new Events\CheckBox($this);

        /** Задаем возможность использовать кнопку как checkbox */
        $this->checkable = true;
        
        $this->checked = $check;

        /** Залаем стиль оформления */
        Core::getInstance()->style->set($this, 'CheckBox');
        $this->onToggled = function($sender, $check) {
            $this->update($check);
        };
    }

    private function update($check) {
        $this->icon = Core::getInstance()->icon->font(($check ? 'fa-check-square-o' : 'fa-square-o'), $this->iconSize);
        /** Изменяем иконку в зависимости от аргумента $check */
        $this->iconLabel->setText($this->icon->__toString());
//        Core::getInstance()->style->set($this, 'CheckBox');
    }
}