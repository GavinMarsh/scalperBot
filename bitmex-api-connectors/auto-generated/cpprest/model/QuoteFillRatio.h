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

/*
 * QuoteFillRatio.h
 *
 * Daily Quote Fill Ratio Statistic
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_QuoteFillRatio_H_
#define IO_SWAGGER_CLIENT_MODEL_QuoteFillRatio_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Daily Quote Fill Ratio Statistic
/// </summary>
class  QuoteFillRatio
    : public ModelBase
{
public:
    QuoteFillRatio();
    virtual ~QuoteFillRatio();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// QuoteFillRatio members

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getDate() const;
        void setDate(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    double getAccount() const;
    bool accountIsSet() const;
    void unsetAccount();
    void setAccount(double value);
    /// <summary>
    /// 
    /// </summary>
    double getQuoteCount() const;
    bool quoteCountIsSet() const;
    void unsetQuoteCount();
    void setQuoteCount(double value);
    /// <summary>
    /// 
    /// </summary>
    double getDealtCount() const;
    bool dealtCountIsSet() const;
    void unsetDealtCount();
    void setDealtCount(double value);
    /// <summary>
    /// 
    /// </summary>
    double getQuotesMavg7() const;
    bool quotesMavg7IsSet() const;
    void unsetQuotesMavg7();
    void setQuotesMavg7(double value);
    /// <summary>
    /// 
    /// </summary>
    double getDealtMavg7() const;
    bool dealtMavg7IsSet() const;
    void unsetDealtMavg7();
    void setDealtMavg7(double value);
    /// <summary>
    /// 
    /// </summary>
    double getQuoteFillRatioMavg7() const;
    bool quoteFillRatioMavg7IsSet() const;
    void unsetQuoteFillRatioMavg7();
    void setQuoteFillRatioMavg7(double value);

protected:
    utility::datetime m_date;
        double m_Account;
    bool m_AccountIsSet;
    double m_QuoteCount;
    bool m_QuoteCountIsSet;
    double m_DealtCount;
    bool m_DealtCountIsSet;
    double m_QuotesMavg7;
    bool m_QuotesMavg7IsSet;
    double m_DealtMavg7;
    bool m_DealtMavg7IsSet;
    double m_QuoteFillRatioMavg7;
    bool m_QuoteFillRatioMavg7IsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_QuoteFillRatio_H_ */
