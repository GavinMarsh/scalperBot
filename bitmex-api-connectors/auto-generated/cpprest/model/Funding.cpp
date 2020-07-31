/**
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.11-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "Funding.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Funding::Funding()
{
    m_Timestamp = utility::datetime();
    m_Symbol = utility::conversions::to_string_t("");
    m_FundingInterval = utility::datetime();
    m_FundingIntervalIsSet = false;
    m_FundingRate = 0.0;
    m_FundingRateIsSet = false;
    m_FundingRateDaily = 0.0;
    m_FundingRateDailyIsSet = false;
}

Funding::~Funding()
{
}

void Funding::validate()
{
    // TODO: implement validation
}

web::json::value Funding::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(m_Timestamp);
    val[utility::conversions::to_string_t("symbol")] = ModelBase::toJson(m_Symbol);
    if(m_FundingIntervalIsSet)
    {
        val[utility::conversions::to_string_t("fundingInterval")] = ModelBase::toJson(m_FundingInterval);
    }
    if(m_FundingRateIsSet)
    {
        val[utility::conversions::to_string_t("fundingRate")] = ModelBase::toJson(m_FundingRate);
    }
    if(m_FundingRateDailyIsSet)
    {
        val[utility::conversions::to_string_t("fundingRateDaily")] = ModelBase::toJson(m_FundingRateDaily);
    }

    return val;
}

void Funding::fromJson(web::json::value& val)
{
    setTimestamp
    (ModelBase::dateFromJson(val[utility::conversions::to_string_t("timestamp")]));
    setSymbol(ModelBase::stringFromJson(val[utility::conversions::to_string_t("symbol")]));
    if(val.has_field(utility::conversions::to_string_t("fundingInterval")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("fundingInterval")];
        if(!fieldValue.is_null())
        {
            setFundingInterval(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fundingRate")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("fundingRate")];
        if(!fieldValue.is_null())
        {
            setFundingRate(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fundingRateDaily")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("fundingRateDaily")];
        if(!fieldValue.is_null())
        {
            setFundingRateDaily(ModelBase::doubleFromJson(fieldValue));
        }
    }
}

void Funding::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timestamp"), m_Timestamp));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("symbol"), m_Symbol));
    if(m_FundingIntervalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fundingInterval"), m_FundingInterval));
        
    }
    if(m_FundingRateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fundingRate"), m_FundingRate));
    }
    if(m_FundingRateDailyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fundingRateDaily"), m_FundingRateDaily));
    }
}

void Funding::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setTimestamp(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("timestamp"))));
    setSymbol(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("symbol"))));
    if(multipart->hasContent(utility::conversions::to_string_t("fundingInterval")))
    {
        setFundingInterval(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("fundingInterval"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fundingRate")))
    {
        setFundingRate(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("fundingRate"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fundingRateDaily")))
    {
        setFundingRateDaily(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("fundingRateDaily"))));
    }
}

utility::datetime Funding::getTimestamp() const
{
    return m_Timestamp;
}


void Funding::setTimestamp(utility::datetime value)
{
    m_Timestamp = value;
    
}
utility::string_t Funding::getSymbol() const
{
    return m_Symbol;
}


void Funding::setSymbol(utility::string_t value)
{
    m_Symbol = value;
    
}
utility::datetime Funding::getFundingInterval() const
{
    return m_FundingInterval;
}


void Funding::setFundingInterval(utility::datetime value)
{
    m_FundingInterval = value;
    m_FundingIntervalIsSet = true;
}
bool Funding::fundingIntervalIsSet() const
{
    return m_FundingIntervalIsSet;
}

void Funding::unsetFundingInterval()
{
    m_FundingIntervalIsSet = false;
}

double Funding::getFundingRate() const
{
    return m_FundingRate;
}


void Funding::setFundingRate(double value)
{
    m_FundingRate = value;
    m_FundingRateIsSet = true;
}
bool Funding::fundingRateIsSet() const
{
    return m_FundingRateIsSet;
}

void Funding::unsetFundingRate()
{
    m_FundingRateIsSet = false;
}

double Funding::getFundingRateDaily() const
{
    return m_FundingRateDaily;
}


void Funding::setFundingRateDaily(double value)
{
    m_FundingRateDaily = value;
    m_FundingRateDailyIsSet = true;
}
bool Funding::fundingRateDailyIsSet() const
{
    return m_FundingRateDailyIsSet;
}

void Funding::unsetFundingRateDaily()
{
    m_FundingRateDailyIsSet = false;
}

}
}
}
}
