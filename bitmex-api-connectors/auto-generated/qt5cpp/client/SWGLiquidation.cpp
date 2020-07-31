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


#include "SWGLiquidation.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGLiquidation::SWGLiquidation(QString json) {
    init();
    this->fromJson(json);
}

SWGLiquidation::SWGLiquidation() {
    init();
}

SWGLiquidation::~SWGLiquidation() {
    this->cleanup();
}

void
SWGLiquidation::init() {
    order_id = new QString("");
    m_order_id_isSet = false;
    symbol = new QString("");
    m_symbol_isSet = false;
    side = new QString("");
    m_side_isSet = false;
    price = 0.0;
    m_price_isSet = false;
    leaves_qty = 0.0;
    m_leaves_qty_isSet = false;
}

void
SWGLiquidation::cleanup() {
    if(order_id != nullptr) { 
        delete order_id;
    }
    if(symbol != nullptr) { 
        delete symbol;
    }
    if(side != nullptr) { 
        delete side;
    }

    if(leaves_qty != nullptr) { 
        delete leaves_qty;
    }
}

SWGLiquidation*
SWGLiquidation::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGLiquidation::fromJsonObject(QJsonObject pJson) {
    ::Swagger::setValue(&order_id, pJson["orderID"], "QString", "QString");
    
    ::Swagger::setValue(&symbol, pJson["symbol"], "QString", "QString");
    
    ::Swagger::setValue(&side, pJson["side"], "QString", "QString");
    
    ::Swagger::setValue(&price, pJson["price"], "double", "");
    
    ::Swagger::setValue(&leaves_qty, pJson["leavesQty"], "SWGNumber", "SWGNumber");
    
}

QString
SWGLiquidation::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
SWGLiquidation::asJsonObject() {
    QJsonObject obj;
    if(order_id != nullptr && *order_id != QString("")){
        toJsonValue(QString("orderID"), order_id, obj, QString("QString"));
    }
    if(symbol != nullptr && *symbol != QString("")){
        toJsonValue(QString("symbol"), symbol, obj, QString("QString"));
    }
    if(side != nullptr && *side != QString("")){
        toJsonValue(QString("side"), side, obj, QString("QString"));
    }
    if(m_price_isSet){
        obj.insert("price", QJsonValue(price));
    }
    if((leaves_qty != nullptr) && (leaves_qty->isSet())){
        toJsonValue(QString("leavesQty"), leaves_qty, obj, QString("SWGNumber"));
    }

    return obj;
}

QString*
SWGLiquidation::getOrderId() {
    return order_id;
}
void
SWGLiquidation::setOrderId(QString* order_id) {
    this->order_id = order_id;
    this->m_order_id_isSet = true;
}

QString*
SWGLiquidation::getSymbol() {
    return symbol;
}
void
SWGLiquidation::setSymbol(QString* symbol) {
    this->symbol = symbol;
    this->m_symbol_isSet = true;
}

QString*
SWGLiquidation::getSide() {
    return side;
}
void
SWGLiquidation::setSide(QString* side) {
    this->side = side;
    this->m_side_isSet = true;
}

double
SWGLiquidation::getPrice() {
    return price;
}
void
SWGLiquidation::setPrice(double price) {
    this->price = price;
    this->m_price_isSet = true;
}

SWGNumber*
SWGLiquidation::getLeavesQty() {
    return leaves_qty;
}
void
SWGLiquidation::setLeavesQty(SWGNumber* leaves_qty) {
    this->leaves_qty = leaves_qty;
    this->m_leaves_qty_isSet = true;
}


bool
SWGLiquidation::isSet(){
    bool isObjectUpdated = false;
    do{
        if(order_id != nullptr && *order_id != QString("")){ isObjectUpdated = true; break;}
        if(symbol != nullptr && *symbol != QString("")){ isObjectUpdated = true; break;}
        if(side != nullptr && *side != QString("")){ isObjectUpdated = true; break;}
        if(m_price_isSet){ isObjectUpdated = true; break;}
        if(leaves_qty != nullptr && leaves_qty->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

