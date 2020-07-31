/**
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGInstrumentInterval.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGInstrumentInterval::SWGInstrumentInterval(QString json) {
    init();
    this->fromJson(json);
}

SWGInstrumentInterval::SWGInstrumentInterval() {
    init();
}

SWGInstrumentInterval::~SWGInstrumentInterval() {
    this->cleanup();
}

void
SWGInstrumentInterval::init() {
    intervals = new QList<QString*>();
    m_intervals_isSet = false;
    symbols = new QList<QString*>();
    m_symbols_isSet = false;
}

void
SWGInstrumentInterval::cleanup() {
    if(intervals != nullptr) { 
        auto arr = intervals;
        for(auto o: *arr) { 
            delete o;
        }
        delete intervals;
    }
    if(symbols != nullptr) { 
        auto arr = symbols;
        for(auto o: *arr) { 
            delete o;
        }
        delete symbols;
    }
}

SWGInstrumentInterval*
SWGInstrumentInterval::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInstrumentInterval::fromJsonObject(QJsonObject pJson) {
    
    ::Swagger::setValue(&intervals, pJson["intervals"], "QList", "QString");
    
    ::Swagger::setValue(&symbols, pJson["symbols"], "QList", "QString");
}

QString
SWGInstrumentInterval::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
SWGInstrumentInterval::asJsonObject() {
    QJsonObject obj;
    if(intervals->size() > 0){
        toJsonArray((QList<void*>*)intervals, obj, "intervals", "QString");
    }
    if(symbols->size() > 0){
        toJsonArray((QList<void*>*)symbols, obj, "symbols", "QString");
    }

    return obj;
}

QList<QString*>*
SWGInstrumentInterval::getIntervals() {
    return intervals;
}
void
SWGInstrumentInterval::setIntervals(QList<QString*>* intervals) {
    this->intervals = intervals;
    this->m_intervals_isSet = true;
}

QList<QString*>*
SWGInstrumentInterval::getSymbols() {
    return symbols;
}
void
SWGInstrumentInterval::setSymbols(QList<QString*>* symbols) {
    this->symbols = symbols;
    this->m_symbols_isSet = true;
}


bool
SWGInstrumentInterval::isSet(){
    bool isObjectUpdated = false;
    do{
        if(intervals->size() > 0){ isObjectUpdated = true; break;}
        if(symbols->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
