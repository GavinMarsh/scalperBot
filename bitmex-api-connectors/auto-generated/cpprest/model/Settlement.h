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
 * Settlement.h
 *
 * Historical Settlement Data
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_Settlement_H_
#define IO_SWAGGER_CLIENT_MODEL_Settlement_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Historical Settlement Data
/// </summary>
class  Settlement
    : public ModelBase
{
public:
    Settlement();
    virtual ~Settlement();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Settlement members

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getTimestamp() const;
        void setTimestamp(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSymbol() const;
        void setSymbol(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSettlementType() const;
    bool settlementTypeIsSet() const;
    void unsetSettlementType();
    void setSettlementType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getSettledPrice() const;
    bool settledPriceIsSet() const;
    void unsetSettledPrice();
    void setSettledPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    double getOptionStrikePrice() const;
    bool optionStrikePriceIsSet() const;
    void unsetOptionStrikePrice();
    void setOptionStrikePrice(double value);
    /// <summary>
    /// 
    /// </summary>
    double getOptionUnderlyingPrice() const;
    bool optionUnderlyingPriceIsSet() const;
    void unsetOptionUnderlyingPrice();
    void setOptionUnderlyingPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    double getBankrupt() const;
    bool bankruptIsSet() const;
    void unsetBankrupt();
    void setBankrupt(double value);
    /// <summary>
    /// 
    /// </summary>
    double getTaxBase() const;
    bool taxBaseIsSet() const;
    void unsetTaxBase();
    void setTaxBase(double value);
    /// <summary>
    /// 
    /// </summary>
    double getTaxRate() const;
    bool taxRateIsSet() const;
    void unsetTaxRate();
    void setTaxRate(double value);

protected:
    utility::datetime m_Timestamp;
        utility::string_t m_Symbol;
        utility::string_t m_SettlementType;
    bool m_SettlementTypeIsSet;
    double m_SettledPrice;
    bool m_SettledPriceIsSet;
    double m_OptionStrikePrice;
    bool m_OptionStrikePriceIsSet;
    double m_OptionUnderlyingPrice;
    bool m_OptionUnderlyingPriceIsSet;
    double m_Bankrupt;
    bool m_BankruptIsSet;
    double m_TaxBase;
    bool m_TaxBaseIsSet;
    double m_TaxRate;
    bool m_TaxRateIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_Settlement_H_ */
