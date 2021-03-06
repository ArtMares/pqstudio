#include "plastiqmethod.h"
#include "plastiqqcandlesticklegendmarker.h"

#include "charts/PlastiQQLegendMarker/plastiqqlegendmarker.h"
#include <QCandlestickLegendMarker> 
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQCandlestickLegendMarker::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQCandlestickLegendMarker::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQCandlestickLegendMarker::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQCandlestickLegendMarker::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCandlestickLegendMarker::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQCandlestickLegendMarker::plastiqInherits = { &PlastiQQLegendMarker::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCandlestickLegendMarker::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCandlestickLegendMarker::plastiq_static_metaObject = {
    { &PlastiQQLegendMarker::plastiq_static_metaObject, &plastiqInherits, "QCandlestickLegendMarker", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCandlestickLegendMarker::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCandlestickLegendMarker::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCandlestickLegendMarker *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCandlestickLegendMarker *p = new PlastiQQCandlestickLegendMarker();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCandlestickLegendMarker *p = new PlastiQQCandlestickLegendMarker();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQLegendMarker::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCandlestickLegendMarker *o = sc ? Q_NULLPTR : reinterpret_cast<QCandlestickLegendMarker*>(object->plastiq_data());

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQLegendMarker::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCandlestickLegendMarker *o = reinterpret_cast<QCandlestickLegendMarker*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCandlestickLegendMarker *o = reinterpret_cast<QCandlestickLegendMarker*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCandlestickLegendMarker *o = reinterpret_cast<QCandlestickLegendMarker*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCandlestickLegendMarker *o = reinterpret_cast<QCandlestickLegendMarker*>(object->plastiq_data());

        if(className == "QLegendMarker") {
            stack[0].s_voidp = static_cast<QLegendMarker*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCandlestickLegendMarker::~PlastiQQCandlestickLegendMarker() {
    QCandlestickLegendMarker* o = reinterpret_cast<QCandlestickLegendMarker*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
