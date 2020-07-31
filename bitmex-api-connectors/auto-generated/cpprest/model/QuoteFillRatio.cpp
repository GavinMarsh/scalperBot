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



#include "QuoteFillRatio.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

QuoteFillRatio::QuoteFillRatio()
{
    m_date = utility::datetime();
    m_Account = 0.0;
    m_AccountIsSet = false;
    m_QuoteCount = 0.0;
    m_QuoteCountIsSet = false;
    m_DealtCount = 0.0;
    m_DealtCountIsSet = false;
    m_QuotesMavg7 = 0.0;
    m_QuotesMavg7IsSet = false;
    m_DealtMavg7 = 0.0;
    m_DealtMavg7IsSet = false;
    m_QuoteFillRatioMavg7 = 0.0;
    m_QuoteFillRatioMavg7IsSet = false;
}

QuoteFillRatio::~QuoteFillRatio()
{
}

void QuoteFillRatio::validate()
{
    // TODO: implement validation
}

web::json::value QuoteFillRatio::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("date")] = ModelBase::toJson(m_date);
    if(m_AccountIsSet)
    {
        val[utility::conversions::to_string_t("account")] = ModelBase::toJson(m_Account);
    }
    if(m_QuoteCountIsSet)
    {
        val[utility::conversions::to_string_t("quoteCount")] = ModelBase::toJson(m_QuoteCount);
    }
    if(m_DealtCountIsSet)
    {
        val[utility::conversions::to_string_t("dealtCount")] = ModelBase::toJson(m_DealtCount);
    }
    if(m_QuotesMavg7IsSet)
    {
        val[utility::conversions::to_string_t("quotesMavg7")] = ModelBase::toJson(m_QuotesMavg7);
    }
    if(m_DealtMavg7IsSet)
    {
        val[utility::conversions::to_string_t("dealtMavg7")] = ModelBase::toJson(m_DealtMavg7);
    }
    if(m_QuoteFillRatioMavg7IsSet)
    {
        val[utility::conversions::to_string_t("quoteFillRatioMavg7")] = ModelBase::toJson(m_QuoteFillRatioMavg7);
    }

    return val;
}

void QuoteFillRatio::fromJson(web::json::value& val)
{
    setDate
    (ModelBase::dateFromJson(val[utility::conversions::to_string_t("date")]));
    if(val.has_field(utility::conversions::to_string_t("account")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("account")];
        if(!fieldValue.is_null())
        {
            setAccount(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quoteCount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("quoteCount")];
        if(!fieldValue.is_null())
        {
            setQuoteCount(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dealtCount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("dealtCount")];
        if(!fieldValue.is_null())
        {
            setDealtCount(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quotesMavg7")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("quotesMavg7")];
        if(!fieldValue.is_null())
        {
            setQuotesMavg7(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dealtMavg7")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("dealtMavg7")];
        if(!fieldValue.is_null())
        {
            setDealtMavg7(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quoteFillRatioMavg7")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("quoteFillRatioMavg7")];
        if(!fieldValue.is_null())
        {
            setQuoteFillRatioMavg7(ModelBase::doubleFromJson(fieldValue));
        }
    }
}

void QuoteFillRatio::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("date"), m_date));
    if(m_AccountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("account"), m_Account));
    }
    if(m_QuoteCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("quoteCount"), m_QuoteCount));
    }
    if(m_DealtCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dealtCount"), m_DealtCount));
    }
    if(m_QuotesMavg7IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("quotesMavg7"), m_QuotesMavg7));
    }
    if(m_DealtMavg7IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dealtMavg7"), m_DealtMavg7));
    }
    if(m_QuoteFillRatioMavg7IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("quoteFillRatioMavg7"), m_QuoteFillRatioMavg7));
    }
}

void QuoteFillRatio::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setDate(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("date"))));
    if(multipart->hasContent(utility::conversions::to_string_t("account")))
    {
        setAccount(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("account"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("quoteCount")))
    {
        setQuoteCount(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("quoteCount"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dealtCount")))
    {
        setDealtCount(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("dealtCount"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("quotesMavg7")))
    {
        setQuotesMavg7(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("quotesMavg7"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dealtMavg7")))
    {
        setDealtMavg7(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("dealtMavg7"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("quoteFillRatioMavg7")))
    {
        setQuoteFillRatioMavg7(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("quoteFillRatioMavg7"))));
    }
}

utility::datetime QuoteFillRatio::getDate() const
{
    return m_date;
}


void QuoteFillRatio::setDate(utility::datetime value)
{
    m_date = value;
    
}
double QuoteFillRatio::getAccount() const
{
    return m_Account;
}


void QuoteFillRatio::setAccount(double value)
{
    m_Account = value;
    m_AccountIsSet = true;
}
bool QuoteFillRatio::accountIsSet() const
{
    return m_AccountIsSet;
}

void QuoteFillRatio::unsetAccount()
{
    m_AccountIsSet = false;
}

double QuoteFillRatio::getQuoteCount() const
{
    return m_QuoteCount;
}


void QuoteFillRatio::setQuoteCount(double value)
{
    m_QuoteCount = value;
    m_QuoteCountIsSet = true;
}
bool QuoteFillRatio::quoteCountIsSet() const
{
    return m_QuoteCountIsSet;
}

void QuoteFillRatio::unsetQuoteCount()
{
    m_QuoteCountIsSet = false;
}

double QuoteFillRatio::getDealtCount() const
{
    return m_DealtCount;
}


void QuoteFillRatio::setDealtCount(double value)
{
    m_DealtCount = value;
    m_DealtCountIsSet = true;
}
bool QuoteFillRatio::dealtCountIsSet() const
{
    return m_DealtCountIsSet;
}

void QuoteFillRatio::unsetDealtCount()
{
    m_DealtCountIsSet = false;
}

double QuoteFillRatio::getQuotesMavg7() const
{
    return m_QuotesMavg7;
}


void QuoteFillRatio::setQuotesMavg7(double value)
{
    m_QuotesMavg7 = value;
    m_QuotesMavg7IsSet = true;
}
bool QuoteFillRatio::quotesMavg7IsSet() const
{
    return m_QuotesMavg7IsSet;
}

void QuoteFillRatio::unsetQuotesMavg7()
{
    m_QuotesMavg7IsSet = false;
}

double QuoteFillRatio::getDealtMavg7() const
{
    return m_DealtMavg7;
}


void QuoteFillRatio::setDealtMavg7(double value)
{
    m_DealtMavg7 = value;
    m_DealtMavg7IsSet = true;
}
bool QuoteFillRatio::dealtMavg7IsSet() const
{
    return m_DealtMavg7IsSet;
}

void QuoteFillRatio::unsetDealtMavg7()
{
    m_DealtMavg7IsSet = false;
}

double QuoteFillRatio::getQuoteFillRatioMavg7() const
{
    return m_QuoteFillRatioMavg7;
}


void QuoteFillRatio::setQuoteFillRatioMavg7(double value)
{
    m_QuoteFillRatioMavg7 = value;
    m_QuoteFillRatioMavg7IsSet = true;
}
bool QuoteFillRatio::quoteFillRatioMavg7IsSet() const
{
    return m_QuoteFillRatioMavg7IsSet;
}

void QuoteFillRatio::unsetQuoteFillRatioMavg7()
{
    m_QuoteFillRatioMavg7IsSet = false;
}

}
}
}
}

