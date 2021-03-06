#include "plastiqmethod.h"
#include "plastiqqcameraflashcontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QCameraFlashControl> 

QHash<QByteArray, PlastiQMethod> PlastiQQCameraFlashControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraFlashControl::plastiqMethods = {
    { "flashMode()", { "flashMode", "", "QCameraExposure::FlashModes", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFlashModeSupported(enum)", { "isFlashModeSupported", "QCameraExposure::FlashModes", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFlashReady()", { "isFlashReady", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFlashMode(enum)", { "setFlashMode", "QCameraExposure::FlashModes", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraFlashControl::plastiqSignals = {
    { "flashReady(bool)", { "flashReady", "bool", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCameraFlashControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCameraFlashControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQCameraFlashControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCameraFlashControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCameraFlashControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QCameraFlashControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCameraFlashControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCameraFlashControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCameraFlashControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCameraFlashControl *p = new PlastiQQCameraFlashControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCameraFlashControl *p = new PlastiQQCameraFlashControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 4) {
            id -= 4;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCameraFlashControl *o = sc ? Q_NULLPTR : reinterpret_cast<QCameraFlashControl*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->flashMode(); // HACK for QCameraExposure::FlashModes 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { bool _r = o->isFlashModeSupported(QCameraExposure::FlashModes(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->isFlashReady();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: o->setFlashMode(QCameraExposure::FlashModes(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCameraFlashControl *o = reinterpret_cast<QCameraFlashControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QCameraFlashControl::flashReady,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "flashReady", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCameraFlashControl *o = reinterpret_cast<QCameraFlashControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCameraFlashControl *o = reinterpret_cast<QCameraFlashControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCameraFlashControl *o = reinterpret_cast<QCameraFlashControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCameraFlashControl::~PlastiQQCameraFlashControl() {
    QCameraFlashControl* o = reinterpret_cast<QCameraFlashControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
