#include "plastiqmethod.h"
#include "plastiqqlineseries.h"

#include "charts/PlastiQQXYSeries/plastiqqxyseries.h"
#include <QLineSeries> 
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQLineSeries::plastiqConstructors = {
    { "QLineSeries()", { "QLineSeries", "", "QLineSeries*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLineSeries(QObject*)", { "QLineSeries", "QObject*", "QLineSeries*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLineSeries::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQLineSeries::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQLineSeries::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQLineSeries::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQLineSeries::plastiqInherits = { &PlastiQQXYSeries::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQLineSeries::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQLineSeries::plastiq_static_metaObject = {
    { &PlastiQQXYSeries::plastiq_static_metaObject, &plastiqInherits, "QLineSeries", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLineSeries::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQLineSeries::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QLineSeries *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QLineSeries(); break;
        case 1: o = new QLineSeries(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQLineSeries *p = new PlastiQQLineSeries();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLineSeries *p = new PlastiQQLineSeries();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQXYSeries::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QLineSeries *o = sc ? Q_NULLPTR : reinterpret_cast<QLineSeries*>(object->plastiq_data());

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQXYSeries::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QLineSeries *o = reinterpret_cast<QLineSeries*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QLineSeries *o = reinterpret_cast<QLineSeries*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QLineSeries *o = reinterpret_cast<QLineSeries*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QLineSeries *o = reinterpret_cast<QLineSeries*>(object->plastiq_data());

        if(className == "QXYSeries") {
            stack[0].s_voidp = static_cast<QXYSeries*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQLineSeries::~PlastiQQLineSeries() {
    QLineSeries* o = reinterpret_cast<QLineSeries*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
