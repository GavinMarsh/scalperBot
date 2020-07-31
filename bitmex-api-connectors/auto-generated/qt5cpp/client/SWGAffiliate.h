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

/*
 * SWGAffiliate.h
 *
 * 
 */

#ifndef SWGAffiliate_H_
#define SWGAffiliate_H_

#include <QJsonObject>


#include "SWGNumber.h"
#include <QDateTime>
#include <QString>

#include "SWGObject.h"

namespace Swagger {

class SWGAffiliate: public SWGObject {
public:
    SWGAffiliate();
    SWGAffiliate(QString json);
    ~SWGAffiliate();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    SWGAffiliate* fromJson(QString jsonString) override;

    SWGNumber* getAccount();
    void setAccount(SWGNumber* account);

    QString* getCurrency();
    void setCurrency(QString* currency);

    SWGNumber* getPrevPayout();
    void setPrevPayout(SWGNumber* prev_payout);

    SWGNumber* getPrevTurnover();
    void setPrevTurnover(SWGNumber* prev_turnover);

    SWGNumber* getPrevComm();
    void setPrevComm(SWGNumber* prev_comm);

    QDateTime* getPrevTimestamp();
    void setPrevTimestamp(QDateTime* prev_timestamp);

    SWGNumber* getExecTurnover();
    void setExecTurnover(SWGNumber* exec_turnover);

    SWGNumber* getExecComm();
    void setExecComm(SWGNumber* exec_comm);

    SWGNumber* getTotalReferrals();
    void setTotalReferrals(SWGNumber* total_referrals);

    SWGNumber* getTotalTurnover();
    void setTotalTurnover(SWGNumber* total_turnover);

    SWGNumber* getTotalComm();
    void setTotalComm(SWGNumber* total_comm);

    double getPayoutPcnt();
    void setPayoutPcnt(double payout_pcnt);

    SWGNumber* getPendingPayout();
    void setPendingPayout(SWGNumber* pending_payout);

    QDateTime* getTimestamp();
    void setTimestamp(QDateTime* timestamp);

    double getReferrerAccount();
    void setReferrerAccount(double referrer_account);

    double getReferralDiscount();
    void setReferralDiscount(double referral_discount);

    double getAffiliatePayout();
    void setAffiliatePayout(double affiliate_payout);


    virtual bool isSet() override;

private:
    SWGNumber* account;
    bool m_account_isSet;

    QString* currency;
    bool m_currency_isSet;

    SWGNumber* prev_payout;
    bool m_prev_payout_isSet;

    SWGNumber* prev_turnover;
    bool m_prev_turnover_isSet;

    SWGNumber* prev_comm;
    bool m_prev_comm_isSet;

    QDateTime* prev_timestamp;
    bool m_prev_timestamp_isSet;

    SWGNumber* exec_turnover;
    bool m_exec_turnover_isSet;

    SWGNumber* exec_comm;
    bool m_exec_comm_isSet;

    SWGNumber* total_referrals;
    bool m_total_referrals_isSet;

    SWGNumber* total_turnover;
    bool m_total_turnover_isSet;

    SWGNumber* total_comm;
    bool m_total_comm_isSet;

    double payout_pcnt;
    bool m_payout_pcnt_isSet;

    SWGNumber* pending_payout;
    bool m_pending_payout_isSet;

    QDateTime* timestamp;
    bool m_timestamp_isSet;

    double referrer_account;
    bool m_referrer_account_isSet;

    double referral_discount;
    bool m_referral_discount_isSet;

    double affiliate_payout;
    bool m_affiliate_payout_isSet;

};

}

#endif /* SWGAffiliate_H_ */
