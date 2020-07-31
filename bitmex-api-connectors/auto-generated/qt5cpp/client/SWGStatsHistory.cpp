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


#include "SWGStatsHistory.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGStatsHistory::SWGStatsHistory(QString json) {
    init();
    this->fromJson(json);
}

SWGStatsHistory::SWGStatsHistory() {
    init();
}

SWGStatsHistory::~SWGStatsHistory() {
    this->cleanup();
}

void
SWGStatsHistory::init() {
    date = NULL;
    m_date_isSet = false;
    root_symbol = new QString("");
    m_root_symbol_isSet = false;
    currency = new QString("");
    m_currency_isSet = false;
    volume = 0.0;
    m_volume_isSet = false;
    turnover = 0.0;
    m_turnover_isSet = false;
}

void
SWGStatsHistory::cleanup() {
    if(date != nullptr) { 
        delete date;
    }
    if(root_symbol != nullptr) { 
        delete root_symbol;
    }
    if(currency != nullptr) { 
        delete currency;
    }
    if(volume != nullptr) { 
        delete volume;
    }
    if(turnover != nullptr) { 
        delete turnover;
    }
}

SWGStatsHistory*
SWGStatsHistory::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGStatsHistory::fromJsonObject(QJsonObject pJson) {
    ::Swagger::setValue(&date, pJson["date"], "QDateTime", "QDateTime");
    
    ::Swagger::setValue(&root_symbol, pJson["rootSymbol"], "QString", "QString");
    
    ::Swagger::setValue(&currency, pJson["currency"], "QString", "QString");
    
    ::Swagger::setValue(&volume, pJson["volume"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&turnover, pJson["turnover"], "SWGNumber", "SWGNumber");
    
}

QString
SWGStatsHistory::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
SWGStatsHistory::asJsonObject() {
    QJsonObject obj;
    if(date != nullptr) { 
        toJsonValue(QString("date"), date, obj, QString("QDateTime"));
    }
    if(root_symbol != nullptr && *root_symbol != QString("")){
        toJsonValue(QString("rootSymbol"), root_symbol, obj, QString("QString"));
    }
    if(currency != nullptr && *currency != QString("")){
        toJsonValue(QString("currency"), currency, obj, QString("QString"));
    }
    if((volume != nullptr) && (volume->isSet())){
        toJsonValue(QString("volume"), volume, obj, QString("SWGNumber"));
    }
    if((turnover != nullptr) && (turnover->isSet())){
        toJsonValue(QString("turnover"), turnover, obj, QString("SWGNumber"));
    }

    return obj;
}

QDateTime*
SWGStatsHistory::getDate() {
    return date;
}
void
SWGStatsHistory::setDate(QDateTime* date) {
    this->date = date;
    this->m_date_isSet = true;
}

QString*
SWGStatsHistory::getRootSymbol() {
    return root_symbol;
}
void
SWGStatsHistory::setRootSymbol(QString* root_symbol) {
    this->root_symbol = root_symbol;
    this->m_root_symbol_isSet = true;
}

QString*
SWGStatsHistory::getCurrency() {
    return currency;
}
void
SWGStatsHistory::setCurrency(QString* currency) {
    this->currency = currency;
    this->m_currency_isSet = true;
}

SWGNumber*
SWGStatsHistory::getVolume() {
    return volume;
}
void
SWGStatsHistory::setVolume(SWGNumber* volume) {
    this->volume = volume;
    this->m_volume_isSet = true;
}

SWGNumber*
SWGStatsHistory::getTurnover() {
    return turnover;
}
void
SWGStatsHistory::setTurnover(SWGNumber* turnover) {
    this->turnover = turnover;
    this->m_turnover_isSet = true;
}


bool
SWGStatsHistory::isSet(){
    bool isObjectUpdated = false;
    do{
        
        if(root_symbol != nullptr && *root_symbol != QString("")){ isObjectUpdated = true; break;}
        if(currency != nullptr && *currency != QString("")){ isObjectUpdated = true; break;}
        if(volume != nullptr && volume->isSet()){ isObjectUpdated = true; break;}
        if(turnover != nullptr && turnover->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

