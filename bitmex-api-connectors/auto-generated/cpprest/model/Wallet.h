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
 * Wallet.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_Wallet_H_
#define IO_SWAGGER_CLIENT_MODEL_Wallet_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Wallet
    : public ModelBase
{
public:
    Wallet();
    virtual ~Wallet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Wallet members

    /// <summary>
    /// 
    /// </summary>
    double getAccount() const;
        void setAccount(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCurrency() const;
        void setCurrency(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getPrevDeposited() const;
    bool prevDepositedIsSet() const;
    void unsetPrevDeposited();
    void setPrevDeposited(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPrevWithdrawn() const;
    bool prevWithdrawnIsSet() const;
    void unsetPrevWithdrawn();
    void setPrevWithdrawn(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPrevTransferIn() const;
    bool prevTransferInIsSet() const;
    void unsetPrevTransferIn();
    void setPrevTransferIn(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPrevTransferOut() const;
    bool prevTransferOutIsSet() const;
    void unsetPrevTransferOut();
    void setPrevTransferOut(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPrevAmount() const;
    bool prevAmountIsSet() const;
    void unsetPrevAmount();
    void setPrevAmount(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getPrevTimestamp() const;
    bool prevTimestampIsSet() const;
    void unsetPrevTimestamp();
    void setPrevTimestamp(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    double getDeltaDeposited() const;
    bool deltaDepositedIsSet() const;
    void unsetDeltaDeposited();
    void setDeltaDeposited(double value);
    /// <summary>
    /// 
    /// </summary>
    double getDeltaWithdrawn() const;
    bool deltaWithdrawnIsSet() const;
    void unsetDeltaWithdrawn();
    void setDeltaWithdrawn(double value);
    /// <summary>
    /// 
    /// </summary>
    double getDeltaTransferIn() const;
    bool deltaTransferInIsSet() const;
    void unsetDeltaTransferIn();
    void setDeltaTransferIn(double value);
    /// <summary>
    /// 
    /// </summary>
    double getDeltaTransferOut() const;
    bool deltaTransferOutIsSet() const;
    void unsetDeltaTransferOut();
    void setDeltaTransferOut(double value);
    /// <summary>
    /// 
    /// </summary>
    double getDeltaAmount() const;
    bool deltaAmountIsSet() const;
    void unsetDeltaAmount();
    void setDeltaAmount(double value);
    /// <summary>
    /// 
    /// </summary>
    double getDeposited() const;
    bool depositedIsSet() const;
    void unsetDeposited();
    void setDeposited(double value);
    /// <summary>
    /// 
    /// </summary>
    double getWithdrawn() const;
    bool withdrawnIsSet() const;
    void unsetWithdrawn();
    void setWithdrawn(double value);
    /// <summary>
    /// 
    /// </summary>
    double getTransferIn() const;
    bool transferInIsSet() const;
    void unsetTransferIn();
    void setTransferIn(double value);
    /// <summary>
    /// 
    /// </summary>
    double getTransferOut() const;
    bool transferOutIsSet() const;
    void unsetTransferOut();
    void setTransferOut(double value);
    /// <summary>
    /// 
    /// </summary>
    double getAmount() const;
    bool amountIsSet() const;
    void unsetAmount();
    void setAmount(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPendingCredit() const;
    bool pendingCreditIsSet() const;
    void unsetPendingCredit();
    void setPendingCredit(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPendingDebit() const;
    bool pendingDebitIsSet() const;
    void unsetPendingDebit();
    void setPendingDebit(double value);
    /// <summary>
    /// 
    /// </summary>
    double getConfirmedDebit() const;
    bool confirmedDebitIsSet() const;
    void unsetConfirmedDebit();
    void setConfirmedDebit(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getTimestamp() const;
    bool timestampIsSet() const;
    void unsetTimestamp();
    void setTimestamp(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAddr() const;
    bool addrIsSet() const;
    void unsetAddr();
    void setAddr(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getScript() const;
    bool scriptIsSet() const;
    void unsetScript();
    void setScript(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getWithdrawalLock();
    bool withdrawalLockIsSet() const;
    void unsetWithdrawalLock();
    void setWithdrawalLock(std::vector<utility::string_t> value);

protected:
    double m_Account;
        utility::string_t m_Currency;
        double m_PrevDeposited;
    bool m_PrevDepositedIsSet;
    double m_PrevWithdrawn;
    bool m_PrevWithdrawnIsSet;
    double m_PrevTransferIn;
    bool m_PrevTransferInIsSet;
    double m_PrevTransferOut;
    bool m_PrevTransferOutIsSet;
    double m_PrevAmount;
    bool m_PrevAmountIsSet;
    utility::datetime m_PrevTimestamp;
    bool m_PrevTimestampIsSet;
    double m_DeltaDeposited;
    bool m_DeltaDepositedIsSet;
    double m_DeltaWithdrawn;
    bool m_DeltaWithdrawnIsSet;
    double m_DeltaTransferIn;
    bool m_DeltaTransferInIsSet;
    double m_DeltaTransferOut;
    bool m_DeltaTransferOutIsSet;
    double m_DeltaAmount;
    bool m_DeltaAmountIsSet;
    double m_Deposited;
    bool m_DepositedIsSet;
    double m_Withdrawn;
    bool m_WithdrawnIsSet;
    double m_TransferIn;
    bool m_TransferInIsSet;
    double m_TransferOut;
    bool m_TransferOutIsSet;
    double m_Amount;
    bool m_AmountIsSet;
    double m_PendingCredit;
    bool m_PendingCreditIsSet;
    double m_PendingDebit;
    bool m_PendingDebitIsSet;
    double m_ConfirmedDebit;
    bool m_ConfirmedDebitIsSet;
    utility::datetime m_Timestamp;
    bool m_TimestampIsSet;
    utility::string_t m_Addr;
    bool m_AddrIsSet;
    utility::string_t m_Script;
    bool m_ScriptIsSet;
    std::vector<utility::string_t> m_WithdrawalLock;
    bool m_WithdrawalLockIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_Wallet_H_ */