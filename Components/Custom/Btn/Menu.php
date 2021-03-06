<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                03.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom\Btn;
use PQ\Component\Icon\Char;
use PQ\Core;

class Menu extends Icon {

    public function __construct($parent, Char $icon, $text, $id = '') {
        parent::__construct($parent, $icon, $text);
        /** Задаем имя */
        $this->objectName = $id;

        /** Залаем стиль оформления */
        Core::getInstance()->style->set($this, 'MenuBtn');
    }
}