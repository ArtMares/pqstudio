<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                03.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom;
use PQ\Core;

class CheckBox extends IconBtn {

    protected $iconSize = 18;

    public function __construct($parent, $text, $check = false) {
        /** Задаем иконку в зависимости от аргумента $check */
        $this->icon = Core::getInstance()->icon->font(($check ? 'fa-check-square-o' : 'fa-square-o'), $this->iconSize);

        /** Вызываем конструктор родителя и передаем необходимые аргументы */
        parent::__construct($parent, $this->icon, $text);

        /** Задаем возможность использовать кнопку как checkbox */
        $this->checkable = true;

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
    }
}