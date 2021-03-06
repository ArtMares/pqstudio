#include "plastiqmethod.h"
#include "plastiqqtimerevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QTimerEvent> 

QHash<QByteArray, PlastiQMethod> PlastiQQTimerEvent::plastiqConstructors = {
    { "QTimerEvent(int)", { "QTimerEvent", "int", "QTimerEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTimerEvent::plastiqMethods = {
    { "timerId()", { "timerId", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTimerEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTimerEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTimerEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTimerEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTimerEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQTimerEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QTimerEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTimerEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTimerEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTimerEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTimerEvent(stack[1].s_int); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTimerEvent *p = new PlastiQQTimerEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTimerEvent *p = new PlastiQQTimerEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 1) {
            id -= 1;
            PlastiQQEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTimerEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QTimerEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->timerId();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QTimerEvent *o = reinterpret_cast<QTimerEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTimerEvent::~PlastiQQTimerEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
