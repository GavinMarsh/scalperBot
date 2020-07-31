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



#include "Wallet.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Wallet::Wallet()
{
    m_Account = 0.0;
    m_Currency = utility::conversions::to_string_t("");
    m_PrevDeposited = 0.0;
    m_PrevDepositedIsSet = false;
    m_PrevWithdrawn = 0.0;
    m_PrevWithdrawnIsSet = false;
    m_PrevTransferIn = 0.0;
    m_PrevTransferInIsSet = false;
    m_PrevTransferOut = 0.0;
    m_PrevTransferOutIsSet = false;
    m_PrevAmount = 0.0;
    m_PrevAmountIsSet = false;
    m_PrevTimestamp = utility::datetime();
    m_PrevTimestampIsSet = false;
    m_DeltaDeposited = 0.0;
    m_DeltaDepositedIsSet = false;
    m_DeltaWithdrawn = 0.0;
    m_DeltaWithdrawnIsSet = false;
    m_DeltaTransferIn = 0.0;
    m_DeltaTransferInIsSet = false;
    m_DeltaTransferOut = 0.0;
    m_DeltaTransferOutIsSet = false;
    m_DeltaAmount = 0.0;
    m_DeltaAmountIsSet = false;
    m_Deposited = 0.0;
    m_DepositedIsSet = false;
    m_Withdrawn = 0.0;
    m_WithdrawnIsSet = false;
    m_TransferIn = 0.0;
    m_TransferInIsSet = false;
    m_TransferOut = 0.0;
    m_TransferOutIsSet = false;
    m_Amount = 0.0;
    m_AmountIsSet = false;
    m_PendingCredit = 0.0;
    m_PendingCreditIsSet = false;
    m_PendingDebit = 0.0;
    m_PendingDebitIsSet = false;
    m_ConfirmedDebit = 0.0;
    m_ConfirmedDebitIsSet = false;
    m_Timestamp = utility::datetime();
    m_TimestampIsSet = false;
    m_Addr = utility::conversions::to_string_t("");
    m_AddrIsSet = false;
    m_Script = utility::conversions::to_string_t("");
    m_ScriptIsSet = false;
    m_WithdrawalLockIsSet = false;
}

Wallet::~Wallet()
{
}

void Wallet::validate()
{
    // TODO: implement validation
}

web::json::value Wallet::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("account")] = ModelBase::toJson(m_Account);
    val[utility::conversions::to_string_t("currency")] = ModelBase::toJson(m_Currency);
    if(m_PrevDepositedIsSet)
    {
        val[utility::conversions::to_string_t("prevDeposited")] = ModelBase::toJson(m_PrevDeposited);
    }
    if(m_PrevWithdrawnIsSet)
    {
        val[utility::conversions::to_string_t("prevWithdrawn")] = ModelBase::toJson(m_PrevWithdrawn);
    }
    if(m_PrevTransferInIsSet)
    {
        val[utility::conversions::to_string_t("prevTransferIn")] = ModelBase::toJson(m_PrevTransferIn);
    }
    if(m_PrevTransferOutIsSet)
    {
        val[utility::conversions::to_string_t("prevTransferOut")] = ModelBase::toJson(m_PrevTransferOut);
    }
    if(m_PrevAmountIsSet)
    {
        val[utility::conversions::to_string_t("prevAmount")] = ModelBase::toJson(m_PrevAmount);
    }
    if(m_PrevTimestampIsSet)
    {
        val[utility::conversions::to_string_t("prevTimestamp")] = ModelBase::toJson(m_PrevTimestamp);
    }
    if(m_DeltaDepositedIsSet)
    {
        val[utility::conversions::to_string_t("deltaDeposited")] = ModelBase::toJson(m_DeltaDeposited);
    }
    if(m_DeltaWithdrawnIsSet)
    {
        val[utility::conversions::to_string_t("deltaWithdrawn")] = ModelBase::toJson(m_DeltaWithdrawn);
    }
    if(m_DeltaTransferInIsSet)
    {
        val[utility::conversions::to_string_t("deltaTransferIn")] = ModelBase::toJson(m_DeltaTransferIn);
    }
    if(m_DeltaTransferOutIsSet)
    {
        val[utility::conversions::to_string_t("deltaTransferOut")] = ModelBase::toJson(m_DeltaTransferOut);
    }
    if(m_DeltaAmountIsSet)
    {
        val[utility::conversions::to_string_t("deltaAmount")] = ModelBase::toJson(m_DeltaAmount);
    }
    if(m_DepositedIsSet)
    {
        val[utility::conversions::to_string_t("deposited")] = ModelBase::toJson(m_Deposited);
    }
    if(m_WithdrawnIsSet)
    {
        val[utility::conversions::to_string_t("withdrawn")] = ModelBase::toJson(m_Withdrawn);
    }
    if(m_TransferInIsSet)
    {
        val[utility::conversions::to_string_t("transferIn")] = ModelBase::toJson(m_TransferIn);
    }
    if(m_TransferOutIsSet)
    {
        val[utility::conversions::to_string_t("transferOut")] = ModelBase::toJson(m_TransferOut);
    }
    if(m_AmountIsSet)
    {
        val[utility::conversions::to_string_t("amount")] = ModelBase::toJson(m_Amount);
    }
    if(m_PendingCreditIsSet)
    {
        val[utility::conversions::to_string_t("pendingCredit")] = ModelBase::toJson(m_PendingCredit);
    }
    if(m_PendingDebitIsSet)
    {
        val[utility::conversions::to_string_t("pendingDebit")] = ModelBase::toJson(m_PendingDebit);
    }
    if(m_ConfirmedDebitIsSet)
    {
        val[utility::conversions::to_string_t("confirmedDebit")] = ModelBase::toJson(m_ConfirmedDebit);
    }
    if(m_TimestampIsSet)
    {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(m_Timestamp);
    }
    if(m_AddrIsSet)
    {
        val[utility::conversions::to_string_t("addr")] = ModelBase::toJson(m_Addr);
    }
    if(m_ScriptIsSet)
    {
        val[utility::conversions::to_string_t("script")] = ModelBase::toJson(m_Script);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_WithdrawalLock )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("withdrawalLock")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void Wallet::fromJson(web::json::value& val)
{
    setAccount(ModelBase::doubleFromJson(val[utility::conversions::to_string_t("account")]));
    setCurrency(ModelBase::stringFromJson(val[utility::conversions::to_string_t("currency")]));
    if(val.has_field(utility::conversions::to_string_t("prevDeposited")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("prevDeposited")];
        if(!fieldValue.is_null())
        {
            setPrevDeposited(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prevWithdrawn")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("prevWithdrawn")];
        if(!fieldValue.is_null())
        {
            setPrevWithdrawn(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prevTransferIn")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("prevTransferIn")];
        if(!fieldValue.is_null())
        {
            setPrevTransferIn(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prevTransferOut")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("prevTransferOut")];
        if(!fieldValue.is_null())
        {
            setPrevTransferOut(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prevAmount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("prevAmount")];
        if(!fieldValue.is_null())
        {
            setPrevAmount(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prevTimestamp")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("prevTimestamp")];
        if(!fieldValue.is_null())
        {
            setPrevTimestamp(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deltaDeposited")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("deltaDeposited")];
        if(!fieldValue.is_null())
        {
            setDeltaDeposited(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deltaWithdrawn")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("deltaWithdrawn")];
        if(!fieldValue.is_null())
        {
            setDeltaWithdrawn(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deltaTransferIn")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("deltaTransferIn")];
        if(!fieldValue.is_null())
        {
            setDeltaTransferIn(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deltaTransferOut")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("deltaTransferOut")];
        if(!fieldValue.is_null())
        {
            setDeltaTransferOut(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deltaAmount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("deltaAmount")];
        if(!fieldValue.is_null())
        {
            setDeltaAmount(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deposited")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("deposited")];
        if(!fieldValue.is_null())
        {
            setDeposited(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("withdrawn")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("withdrawn")];
        if(!fieldValue.is_null())
        {
            setWithdrawn(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transferIn")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("transferIn")];
        if(!fieldValue.is_null())
        {
            setTransferIn(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transferOut")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("transferOut")];
        if(!fieldValue.is_null())
        {
            setTransferOut(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("amount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("amount")];
        if(!fieldValue.is_null())
        {
            setAmount(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pendingCredit")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("pendingCredit")];
        if(!fieldValue.is_null())
        {
            setPendingCredit(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pendingDebit")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("pendingDebit")];
        if(!fieldValue.is_null())
        {
            setPendingDebit(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confirmedDebit")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("confirmedDebit")];
        if(!fieldValue.is_null())
        {
            setConfirmedDebit(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("timestamp")];
        if(!fieldValue.is_null())
        {
            setTimestamp(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("addr")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("addr")];
        if(!fieldValue.is_null())
        {
            setAddr(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("script")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("script")];
        if(!fieldValue.is_null())
        {
            setScript(ModelBase::stringFromJson(fieldValue));
        }
    }
    {
        m_WithdrawalLock.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("withdrawalLock")))
        {
        for( auto& item : val[utility::conversions::to_string_t("withdrawalLock")].as_array() )
        {
            m_WithdrawalLock.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

void Wallet::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("account"), m_Account));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("currency"), m_Currency));
    if(m_PrevDepositedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("prevDeposited"), m_PrevDeposited));
    }
    if(m_PrevWithdrawnIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("prevWithdrawn"), m_PrevWithdrawn));
    }
    if(m_PrevTransferInIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("prevTransferIn"), m_PrevTransferIn));
    }
    if(m_PrevTransferOutIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("prevTransferOut"), m_PrevTransferOut));
    }
    if(m_PrevAmountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("prevAmount"), m_PrevAmount));
    }
    if(m_PrevTimestampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("prevTimestamp"), m_PrevTimestamp));
        
    }
    if(m_DeltaDepositedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("deltaDeposited"), m_DeltaDeposited));
    }
    if(m_DeltaWithdrawnIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("deltaWithdrawn"), m_DeltaWithdrawn));
    }
    if(m_DeltaTransferInIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("deltaTransferIn"), m_DeltaTransferIn));
    }
    if(m_DeltaTransferOutIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("deltaTransferOut"), m_DeltaTransferOut));
    }
    if(m_DeltaAmountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("deltaAmount"), m_DeltaAmount));
    }
    if(m_DepositedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("deposited"), m_Deposited));
    }
    if(m_WithdrawnIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("withdrawn"), m_Withdrawn));
    }
    if(m_TransferInIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("transferIn"), m_TransferIn));
    }
    if(m_TransferOutIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("transferOut"), m_TransferOut));
    }
    if(m_AmountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("amount"), m_Amount));
    }
    if(m_PendingCreditIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pendingCredit"), m_PendingCredit));
    }
    if(m_PendingDebitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pendingDebit"), m_PendingDebit));
    }
    if(m_ConfirmedDebitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("confirmedDebit"), m_ConfirmedDebit));
    }
    if(m_TimestampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timestamp"), m_Timestamp));
        
    }
    if(m_AddrIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("addr"), m_Addr));
        
    }
    if(m_ScriptIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("script"), m_Script));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_WithdrawalLock )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("withdrawalLock"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void Wallet::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setAccount(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("account"))));
    setCurrency(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("currency"))));
    if(multipart->hasContent(utility::conversions::to_string_t("prevDeposited")))
    {
        setPrevDeposited(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("prevDeposited"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("prevWithdrawn")))
    {
        setPrevWithdrawn(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("prevWithdrawn"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("prevTransferIn")))
    {
        setPrevTransferIn(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("prevTransferIn"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("prevTransferOut")))
    {
        setPrevTransferOut(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("prevTransferOut"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("prevAmount")))
    {
        setPrevAmount(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("prevAmount"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("prevTimestamp")))
    {
        setPrevTimestamp(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("prevTimestamp"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("deltaDeposited")))
    {
        setDeltaDeposited(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("deltaDeposited"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("deltaWithdrawn")))
    {
        setDeltaWithdrawn(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("deltaWithdrawn"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("deltaTransferIn")))
    {
        setDeltaTransferIn(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("deltaTransferIn"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("deltaTransferOut")))
    {
        setDeltaTransferOut(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("deltaTransferOut"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("deltaAmount")))
    {
        setDeltaAmount(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("deltaAmount"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("deposited")))
    {
        setDeposited(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("deposited"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("withdrawn")))
    {
        setWithdrawn(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("withdrawn"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("transferIn")))
    {
        setTransferIn(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("transferIn"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("transferOut")))
    {
        setTransferOut(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("transferOut"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("amount")))
    {
        setAmount(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("amount"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pendingCredit")))
    {
        setPendingCredit(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("pendingCredit"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pendingDebit")))
    {
        setPendingDebit(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("pendingDebit"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("confirmedDebit")))
    {
        setConfirmedDebit(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("confirmedDebit"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("timestamp")))
    {
        setTimestamp(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("timestamp"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("addr")))
    {
        setAddr(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("addr"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("script")))
    {
        setScript(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("script"))));
    }
    {
        m_WithdrawalLock.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("withdrawalLock")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("withdrawalLock"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_WithdrawalLock.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

double Wallet::getAccount() const
{
    return m_Account;
}


void Wallet::setAccount(double value)
{
    m_Account = value;
    
}
utility::string_t Wallet::getCurrency() const
{
    return m_Currency;
}


void Wallet::setCurrency(utility::string_t value)
{
    m_Currency = value;
    
}
double Wallet::getPrevDeposited() const
{
    return m_PrevDeposited;
}


void Wallet::setPrevDeposited(double value)
{
    m_PrevDeposited = value;
    m_PrevDepositedIsSet = true;
}
bool Wallet::prevDepositedIsSet() const
{
    return m_PrevDepositedIsSet;
}

void Wallet::unsetPrevDeposited()
{
    m_PrevDepositedIsSet = false;
}

double Wallet::getPrevWithdrawn() const
{
    return m_PrevWithdrawn;
}


void Wallet::setPrevWithdrawn(double value)
{
    m_PrevWithdrawn = value;
    m_PrevWithdrawnIsSet = true;
}
bool Wallet::prevWithdrawnIsSet() const
{
    return m_PrevWithdrawnIsSet;
}

void Wallet::unsetPrevWithdrawn()
{
    m_PrevWithdrawnIsSet = false;
}

double Wallet::getPrevTransferIn() const
{
    return m_PrevTransferIn;
}


void Wallet::setPrevTransferIn(double value)
{
    m_PrevTransferIn = value;
    m_PrevTransferInIsSet = true;
}
bool Wallet::prevTransferInIsSet() const
{
    return m_PrevTransferInIsSet;
}

void Wallet::unsetPrevTransferIn()
{
    m_PrevTransferInIsSet = false;
}

double Wallet::getPrevTransferOut() const
{
    return m_PrevTransferOut;
}


void Wallet::setPrevTransferOut(double value)
{
    m_PrevTransferOut = value;
    m_PrevTransferOutIsSet = true;
}
bool Wallet::prevTransferOutIsSet() const
{
    return m_PrevTransferOutIsSet;
}

void Wallet::unsetPrevTransferOut()
{
    m_PrevTransferOutIsSet = false;
}

double Wallet::getPrevAmount() const
{
    return m_PrevAmount;
}


void Wallet::setPrevAmount(double value)
{
    m_PrevAmount = value;
    m_PrevAmountIsSet = true;
}
bool Wallet::prevAmountIsSet() const
{
    return m_PrevAmountIsSet;
}

void Wallet::unsetPrevAmount()
{
    m_PrevAmountIsSet = false;
}

utility::datetime Wallet::getPrevTimestamp() const
{
    return m_PrevTimestamp;
}


void Wallet::setPrevTimestamp(utility::datetime value)
{
    m_PrevTimestamp = value;
    m_PrevTimestampIsSet = true;
}
bool Wallet::prevTimestampIsSet() const
{
    return m_PrevTimestampIsSet;
}

void Wallet::unsetPrevTimestamp()
{
    m_PrevTimestampIsSet = false;
}

double Wallet::getDeltaDeposited() const
{
    return m_DeltaDeposited;
}


void Wallet::setDeltaDeposited(double value)
{
    m_DeltaDeposited = value;
    m_DeltaDepositedIsSet = true;
}
bool Wallet::deltaDepositedIsSet() const
{
    return m_DeltaDepositedIsSet;
}

void Wallet::unsetDeltaDeposited()
{
    m_DeltaDepositedIsSet = false;
}

double Wallet::getDeltaWithdrawn() const
{
    return m_DeltaWithdrawn;
}


void Wallet::setDeltaWithdrawn(double value)
{
    m_DeltaWithdrawn = value;
    m_DeltaWithdrawnIsSet = true;
}
bool Wallet::deltaWithdrawnIsSet() const
{
    return m_DeltaWithdrawnIsSet;
}

void Wallet::unsetDeltaWithdrawn()
{
    m_DeltaWithdrawnIsSet = false;
}

double Wallet::getDeltaTransferIn() const
{
    return m_DeltaTransferIn;
}


void Wallet::setDeltaTransferIn(double value)
{
    m_DeltaTransferIn = value;
    m_DeltaTransferInIsSet = true;
}
bool Wallet::deltaTransferInIsSet() const
{
    return m_DeltaTransferInIsSet;
}

void Wallet::unsetDeltaTransferIn()
{
    m_DeltaTransferInIsSet = false;
}

double Wallet::getDeltaTransferOut() const
{
    return m_DeltaTransferOut;
}


void Wallet::setDeltaTransferOut(double value)
{
    m_DeltaTransferOut = value;
    m_DeltaTransferOutIsSet = true;
}
bool Wallet::deltaTransferOutIsSet() const
{
    return m_DeltaTransferOutIsSet;
}

void Wallet::unsetDeltaTransferOut()
{
    m_DeltaTransferOutIsSet = false;
}

double Wallet::getDeltaAmount() const
{
    return m_DeltaAmount;
}


void Wallet::setDeltaAmount(double value)
{
    m_DeltaAmount = value;
    m_DeltaAmountIsSet = true;
}
bool Wallet::deltaAmountIsSet() const
{
    return m_DeltaAmountIsSet;
}

void Wallet::unsetDeltaAmount()
{
    m_DeltaAmountIsSet = false;
}

double Wallet::getDeposited() const
{
    return m_Deposited;
}


void Wallet::setDeposited(double value)
{
    m_Deposited = value;
    m_DepositedIsSet = true;
}
bool Wallet::depositedIsSet() const
{
    return m_DepositedIsSet;
}

void Wallet::unsetDeposited()
{
    m_DepositedIsSet = false;
}

double Wallet::getWithdrawn() const
{
    return m_Withdrawn;
}


void Wallet::setWithdrawn(double value)
{
    m_Withdrawn = value;
    m_WithdrawnIsSet = true;
}
bool Wallet::withdrawnIsSet() const
{
    return m_WithdrawnIsSet;
}

void Wallet::unsetWithdrawn()
{
    m_WithdrawnIsSet = false;
}

double Wallet::getTransferIn() const
{
    return m_TransferIn;
}


void Wallet::setTransferIn(double value)
{
    m_TransferIn = value;
    m_TransferInIsSet = true;
}
bool Wallet::transferInIsSet() const
{
    return m_TransferInIsSet;
}

void Wallet::unsetTransferIn()
{
    m_TransferInIsSet = false;
}

double Wallet::getTransferOut() const
{
    return m_TransferOut;
}


void Wallet::setTransferOut(double value)
{
    m_TransferOut = value;
    m_TransferOutIsSet = true;
}
bool Wallet::transferOutIsSet() const
{
    return m_TransferOutIsSet;
}

void Wallet::unsetTransferOut()
{
    m_TransferOutIsSet = false;
}

double Wallet::getAmount() const
{
    return m_Amount;
}


void Wallet::setAmount(double value)
{
    m_Amount = value;
    m_AmountIsSet = true;
}
bool Wallet::amountIsSet() const
{
    return m_AmountIsSet;
}

void Wallet::unsetAmount()
{
    m_AmountIsSet = false;
}

double Wallet::getPendingCredit() const
{
    return m_PendingCredit;
}


void Wallet::setPendingCredit(double value)
{
    m_PendingCredit = value;
    m_PendingCreditIsSet = true;
}
bool Wallet::pendingCreditIsSet() const
{
    return m_PendingCreditIsSet;
}

void Wallet::unsetPendingCredit()
{
    m_PendingCreditIsSet = false;
}

double Wallet::getPendingDebit() const
{
    return m_PendingDebit;
}


void Wallet::setPendingDebit(double value)
{
    m_PendingDebit = value;
    m_PendingDebitIsSet = true;
}
bool Wallet::pendingDebitIsSet() const
{
    return m_PendingDebitIsSet;
}

void Wallet::unsetPendingDebit()
{
    m_PendingDebitIsSet = false;
}

double Wallet::getConfirmedDebit() const
{
    return m_ConfirmedDebit;
}


void Wallet::setConfirmedDebit(double value)
{
    m_ConfirmedDebit = value;
    m_ConfirmedDebitIsSet = true;
}
bool Wallet::confirmedDebitIsSet() const
{
    return m_ConfirmedDebitIsSet;
}

void Wallet::unsetConfirmedDebit()
{
    m_ConfirmedDebitIsSet = false;
}

utility::datetime Wallet::getTimestamp() const
{
    return m_Timestamp;
}


void Wallet::setTimestamp(utility::datetime value)
{
    m_Timestamp = value;
    m_TimestampIsSet = true;
}
bool Wallet::timestampIsSet() const
{
    return m_TimestampIsSet;
}

void Wallet::unsetTimestamp()
{
    m_TimestampIsSet = false;
}

utility::string_t Wallet::getAddr() const
{
    return m_Addr;
}


void Wallet::setAddr(utility::string_t value)
{
    m_Addr = value;
    m_AddrIsSet = true;
}
bool Wallet::addrIsSet() const
{
    return m_AddrIsSet;
}

void Wallet::unsetAddr()
{
    m_AddrIsSet = false;
}

utility::string_t Wallet::getScript() const
{
    return m_Script;
}


void Wallet::setScript(utility::string_t value)
{
    m_Script = value;
    m_ScriptIsSet = true;
}
bool Wallet::scriptIsSet() const
{
    return m_ScriptIsSet;
}

void Wallet::unsetScript()
{
    m_ScriptIsSet = false;
}

std::vector<utility::string_t>& Wallet::getWithdrawalLock()
{
    return m_WithdrawalLock;
}

void Wallet::setWithdrawalLock(std::vector<utility::string_t> value)
{
    m_WithdrawalLock = value;
    m_WithdrawalLockIsSet = true;
}
bool Wallet::withdrawalLockIsSet() const
{
    return m_WithdrawalLockIsSet;
}

void Wallet::unsetWithdrawalLock()
{
    m_WithdrawalLockIsSet = false;
}

}
}
}
}

