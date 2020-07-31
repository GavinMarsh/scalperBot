/*
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.4.11-SNAPSHOT
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient', 'model/AccessToken', 'model/Affiliate', 'model/CommunicationToken', 'model/Error', 'model/Margin', 'model/QuoteFillRatio', 'model/Transaction', 'model/User', 'model/UserCommissionsBySymbol', 'model/Wallet'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('../model/AccessToken'), require('../model/Affiliate'), require('../model/CommunicationToken'), require('../model/Error'), require('../model/Margin'), require('../model/QuoteFillRatio'), require('../model/Transaction'), require('../model/User'), require('../model/UserCommissionsBySymbol'), require('../model/Wallet'));
  } else {
    // Browser globals (root is window)
    if (!root.BitMexApi) {
      root.BitMexApi = {};
    }
    root.BitMexApi.UserApi = factory(root.BitMexApi.ApiClient, root.BitMexApi.AccessToken, root.BitMexApi.Affiliate, root.BitMexApi.CommunicationToken, root.BitMexApi.Error, root.BitMexApi.Margin, root.BitMexApi.QuoteFillRatio, root.BitMexApi.Transaction, root.BitMexApi.User, root.BitMexApi.UserCommissionsBySymbol, root.BitMexApi.Wallet);
  }
}(this, function(ApiClient, AccessToken, Affiliate, CommunicationToken, Error, Margin, QuoteFillRatio, Transaction, User, UserCommissionsBySymbol, Wallet) {
  'use strict';

  /**
   * User service.
   * @module api/UserApi
   * @version 1.2.0
   */

  /**
   * Constructs a new UserApi. 
   * @alias module:api/UserApi
   * @class
   * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
   * default to {@link module:ApiClient#instance} if unspecified.
   */
  var exports = function(apiClient) {
    this.apiClient = apiClient || ApiClient.instance;


    /**
     * Callback function to receive the result of the userCancelWithdrawal operation.
     * @callback module:api/UserApi~userCancelWithdrawalCallback
     * @param {String} error Error message, if any.
     * @param {module:model/Transaction} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Cancel a withdrawal.
     * @param {String} token 
     * @param {module:api/UserApi~userCancelWithdrawalCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/Transaction}
     */
    this.userCancelWithdrawal = function(token, callback) {
      var postBody = null;

      // verify the required parameter 'token' is set
      if (token === undefined || token === null) {
        throw new Error("Missing the required parameter 'token' when calling userCancelWithdrawal");
      }


      var pathParams = {
      };
      var queryParams = {
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
        'token': token
      };

      var authNames = [];
      var contentTypes = ['application/json', 'application/x-www-form-urlencoded'];
      var accepts = ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'];
      var returnType = Transaction;

      return this.apiClient.callApi(
        '/user/cancelWithdrawal', 'POST',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the userCheckReferralCode operation.
     * @callback module:api/UserApi~userCheckReferralCodeCallback
     * @param {String} error Error message, if any.
     * @param {'Number'} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Check if a referral code is valid.
     * If the code is valid, responds with the referral code's discount (e.g. `0.1` for 10%). Otherwise, will return a 404 or 451 if invalid.
     * @param {Object} opts Optional parameters
     * @param {String} opts.referralCode 
     * @param {module:api/UserApi~userCheckReferralCodeCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link 'Number'}
     */
    this.userCheckReferralCode = function(opts, callback) {
      opts = opts || {};
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
        'referralCode': opts['referralCode'],
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = ['application/json', 'application/x-www-form-urlencoded'];
      var accepts = ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'];
      var returnType = 'Number';

      return this.apiClient.callApi(
        '/user/checkReferralCode', 'GET',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the userCommunicationToken operation.
     * @callback module:api/UserApi~userCommunicationTokenCallback
     * @param {String} error Error message, if any.
     * @param {Array.<module:model/CommunicationToken>} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Register your communication token for mobile clients
     * @param {String} token 
     * @param {String} platformAgent 
     * @param {module:api/UserApi~userCommunicationTokenCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Array.<module:model/CommunicationToken>}
     */
    this.userCommunicationToken = function(token, platformAgent, callback) {
      var postBody = null;

      // verify the required parameter 'token' is set
      if (token === undefined || token === null) {
        throw new Error("Missing the required parameter 'token' when calling userCommunicationToken");
      }

      // verify the required parameter 'platformAgent' is set
      if (platformAgent === undefined || platformAgent === null) {
        throw new Error("Missing the required parameter 'platformAgent' when calling userCommunicationToken");
      }


      var pathParams = {
      };
      var queryParams = {
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
        'token': token,
        'platformAgent': platformAgent
      };

      var authNames = ['apiExpires', 'apiKey', 'apiSignature'];
      var contentTypes = ['application/json', 'application/x-www-form-urlencoded'];
      var accepts = ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'];
      var returnType = [CommunicationToken];

      return this.apiClient.callApi(
        '/user/communicationToken', 'POST',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the userConfirm operation.
     * @callback module:api/UserApi~userConfirmCallback
     * @param {String} error Error message, if any.
     * @param {module:model/AccessToken} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Confirm your email address with a token.
     * @param {String} token 
     * @param {module:api/UserApi~userConfirmCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/AccessToken}
     */
    this.userConfirm = function(token, callback) {
      var postBody = null;

      // verify the required parameter 'token' is set
      if (token === undefined || token === null) {
        throw new Error("Missing the required parameter 'token' when calling userConfirm");
      }


      var pathParams = {
      };
      var queryParams = {
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
        'token': token
      };

      var authNames = [];
      var contentTypes = ['application/json', 'application/x-www-form-urlencoded'];
      var accepts = ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'];
      var returnType = AccessToken;

      return this.apiClient.callApi(
        '/user/confirmEmail', 'POST',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the userConfirmWithdrawal operation.
     * @callback module:api/UserApi~userConfirmWithdrawalCallback
     * @param {String} error Error message, if any.
     * @param {module:model/Transaction} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Confirm a withdrawal.
     * @param {String} token 
     * @param {module:api/UserApi~userConfirmWithdrawalCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/Transaction}
     */
    this.userConfirmWithdrawal = function(token, callback) {
      var postBody = null;

      // verify the required parameter 'token' is set
      if (token === undefined || token === null) {
        throw new Error("Missing the required parameter 'token' when calling userConfirmWithdrawal");
      }


      var pathParams = {
      };
      var queryParams = {
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
        'token': token
      };

      var authNames = [];
      var contentTypes = ['application/json', 'application/x-www-form-urlencoded'];
      var accepts = ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'];
      var returnType = Transaction;

      return this.apiClient.callApi(
        '/user/confirmWithdrawal', 'POST',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the userGet operation.
     * @callback module:api/UserApi~userGetCallback
     * @param {String} error Error message, if any.
     * @param {module:model/User} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get your user model.
     * @param {module:api/UserApi~userGetCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/User}
     */
    this.userGet = function(callback) {
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['apiExpires', 'apiKey', 'apiSignature'];
      var contentTypes = ['application/json', 'application/x-www-form-urlencoded'];
      var accepts = ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'];
      var returnType = User;

      return this.apiClient.callApi(
        '/user', 'GET',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the userGetAffiliateStatus operation.
     * @callback module:api/UserApi~userGetAffiliateStatusCallback
     * @param {String} error Error message, if any.
     * @param {module:model/Affiliate} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get your current affiliate/referral status.
     * @param {module:api/UserApi~userGetAffiliateStatusCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/Affiliate}
     */
    this.userGetAffiliateStatus = function(callback) {
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['apiExpires', 'apiKey', 'apiSignature'];
      var contentTypes = ['application/json', 'application/x-www-form-urlencoded'];
      var accepts = ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'];
      var returnType = Affiliate;

      return this.apiClient.callApi(
        '/user/affiliateStatus', 'GET',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the userGetCommission operation.
     * @callback module:api/UserApi~userGetCommissionCallback
     * @param {String} error Error message, if any.
     * @param {module:model/UserCommissionsBySymbol} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get your account's commission status.
     * @param {module:api/UserApi~userGetCommissionCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/UserCommissionsBySymbol}
     */
    this.userGetCommission = function(callback) {
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['apiExpires', 'apiKey', 'apiSignature'];
      var contentTypes = ['application/json', 'application/x-www-form-urlencoded'];
      var accepts = ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'];
      var returnType = UserCommissionsBySymbol;

      return this.apiClient.callApi(
        '/user/commission', 'GET',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the userGetDepositAddress operation.
     * @callback module:api/UserApi~userGetDepositAddressCallback
     * @param {String} error Error message, if any.
     * @param {'String'} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get a deposit address.
     * @param {Object} opts Optional parameters
     * @param {String} opts.currency  (default to XBt)
     * @param {module:api/UserApi~userGetDepositAddressCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link 'String'}
     */
    this.userGetDepositAddress = function(opts, callback) {
      opts = opts || {};
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
        'currency': opts['currency'],
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['apiExpires', 'apiKey', 'apiSignature'];
      var contentTypes = ['application/json', 'application/x-www-form-urlencoded'];
      var accepts = ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'];
      var returnType = 'String';

      return this.apiClient.callApi(
        '/user/depositAddress', 'GET',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the userGetExecutionHistory operation.
     * @callback module:api/UserApi~userGetExecutionHistoryCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get the execution history by day.
     * @param {String} symbol 
     * @param {Date} timestamp 
     * @param {module:api/UserApi~userGetExecutionHistoryCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.userGetExecutionHistory = function(symbol, timestamp, callback) {
      var postBody = null;

      // verify the required parameter 'symbol' is set
      if (symbol === undefined || symbol === null) {
        throw new Error("Missing the required parameter 'symbol' when calling userGetExecutionHistory");
      }

      // verify the required parameter 'timestamp' is set
      if (timestamp === undefined || timestamp === null) {
        throw new Error("Missing the required parameter 'timestamp' when calling userGetExecutionHistory");
      }


      var pathParams = {
      };
      var queryParams = {
        'symbol': symbol,
        'timestamp': timestamp,
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['apiExpires', 'apiKey', 'apiSignature'];
      var contentTypes = ['application/json', 'application/x-www-form-urlencoded'];
      var accepts = ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'];
      var returnType = Object;

      return this.apiClient.callApi(
        '/user/executionHistory', 'GET',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the userGetMargin operation.
     * @callback module:api/UserApi~userGetMarginCallback
     * @param {String} error Error message, if any.
     * @param {module:model/Margin} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get your account's margin status. Send a currency of \"all\" to receive an array of all supported currencies.
     * @param {Object} opts Optional parameters
     * @param {String} opts.currency  (default to XBt)
     * @param {module:api/UserApi~userGetMarginCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/Margin}
     */
    this.userGetMargin = function(opts, callback) {
      opts = opts || {};
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
        'currency': opts['currency'],
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['apiExpires', 'apiKey', 'apiSignature'];
      var contentTypes = ['application/json', 'application/x-www-form-urlencoded'];
      var accepts = ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'];
      var returnType = Margin;

      return this.apiClient.callApi(
        '/user/margin', 'GET',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the userGetQuoteFillRatio operation.
     * @callback module:api/UserApi~userGetQuoteFillRatioCallback
     * @param {String} error Error message, if any.
     * @param {module:model/QuoteFillRatio} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get 7 days worth of Quote Fill Ratio statistics.
     * @param {module:api/UserApi~userGetQuoteFillRatioCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/QuoteFillRatio}
     */
    this.userGetQuoteFillRatio = function(callback) {
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['apiExpires', 'apiKey', 'apiSignature'];
      var contentTypes = ['application/json', 'application/x-www-form-urlencoded'];
      var accepts = ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'];
      var returnType = QuoteFillRatio;

      return this.apiClient.callApi(
        '/user/quoteFillRatio', 'GET',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the userGetWallet operation.
     * @callback module:api/UserApi~userGetWalletCallback
     * @param {String} error Error message, if any.
     * @param {module:model/Wallet} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get your current wallet information.
     * @param {Object} opts Optional parameters
     * @param {String} opts.currency  (default to XBt)
     * @param {module:api/UserApi~userGetWalletCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/Wallet}
     */
    this.userGetWallet = function(opts, callback) {
      opts = opts || {};
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
        'currency': opts['currency'],
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['apiExpires', 'apiKey', 'apiSignature'];
      var contentTypes = ['application/json', 'application/x-www-form-urlencoded'];
      var accepts = ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'];
      var returnType = Wallet;

      return this.apiClient.callApi(
        '/user/wallet', 'GET',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the userGetWalletHistory operation.
     * @callback module:api/UserApi~userGetWalletHistoryCallback
     * @param {String} error Error message, if any.
     * @param {Array.<module:model/Transaction>} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get a history of all of your wallet transactions (deposits, withdrawals, PNL).
     * @param {Object} opts Optional parameters
     * @param {String} opts.currency  (default to XBt)
     * @param {Number} opts.count Number of results to fetch. (default to 100)
     * @param {Number} opts.start Starting point for results. (default to 0)
     * @param {module:api/UserApi~userGetWalletHistoryCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Array.<module:model/Transaction>}
     */
    this.userGetWalletHistory = function(opts, callback) {
      opts = opts || {};
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
        'currency': opts['currency'],
        'count': opts['count'],
        'start': opts['start'],
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['apiExpires', 'apiKey', 'apiSignature'];
      var contentTypes = ['application/json', 'application/x-www-form-urlencoded'];
      var accepts = ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'];
      var returnType = [Transaction];

      return this.apiClient.callApi(
        '/user/walletHistory', 'GET',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the userGetWalletSummary operation.
     * @callback module:api/UserApi~userGetWalletSummaryCallback
     * @param {String} error Error message, if any.
     * @param {Array.<module:model/Transaction>} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get a summary of all of your wallet transactions (deposits, withdrawals, PNL).
     * @param {Object} opts Optional parameters
     * @param {String} opts.currency  (default to XBt)
     * @param {module:api/UserApi~userGetWalletSummaryCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Array.<module:model/Transaction>}
     */
    this.userGetWalletSummary = function(opts, callback) {
      opts = opts || {};
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
        'currency': opts['currency'],
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['apiExpires', 'apiKey', 'apiSignature'];
      var contentTypes = ['application/json', 'application/x-www-form-urlencoded'];
      var accepts = ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'];
      var returnType = [Transaction];

      return this.apiClient.callApi(
        '/user/walletSummary', 'GET',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the userLogout operation.
     * @callback module:api/UserApi~userLogoutCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Log out of BitMEX.
     * @param {module:api/UserApi~userLogoutCallback} callback The callback function, accepting three arguments: error, data, response
     */
    this.userLogout = function(callback) {
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = ['application/json', 'application/x-www-form-urlencoded'];
      var accepts = ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'];
      var returnType = null;

      return this.apiClient.callApi(
        '/user/logout', 'POST',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the userMinWithdrawalFee operation.
     * @callback module:api/UserApi~userMinWithdrawalFeeCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get the minimum withdrawal fee for a currency.
     * This is changed based on network conditions to ensure timely withdrawals. During network congestion, this may be high. The fee is returned in the same currency.
     * @param {Object} opts Optional parameters
     * @param {String} opts.currency  (default to XBt)
     * @param {module:api/UserApi~userMinWithdrawalFeeCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.userMinWithdrawalFee = function(opts, callback) {
      opts = opts || {};
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
        'currency': opts['currency'],
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = ['application/json', 'application/x-www-form-urlencoded'];
      var accepts = ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'];
      var returnType = Object;

      return this.apiClient.callApi(
        '/user/minWithdrawalFee', 'GET',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the userRequestWithdrawal operation.
     * @callback module:api/UserApi~userRequestWithdrawalCallback
     * @param {String} error Error message, if any.
     * @param {module:model/Transaction} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Request a withdrawal to an external wallet.
     * This will send a confirmation email to the email address on record.
     * @param {String} currency Currency you're withdrawing. Options: `XBt`
     * @param {Number} amount Amount of withdrawal currency.
     * @param {String} address Destination Address.
     * @param {Object} opts Optional parameters
     * @param {String} opts.otpToken 2FA token. Required if 2FA is enabled on your account.
     * @param {Number} opts.fee Network fee for Bitcoin withdrawals. If not specified, a default value will be calculated based on Bitcoin network conditions. You will have a chance to confirm this via email.
     * @param {String} opts.text Optional annotation, e.g. 'Transfer to home wallet'.
     * @param {module:api/UserApi~userRequestWithdrawalCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/Transaction}
     */
    this.userRequestWithdrawal = function(currency, amount, address, opts, callback) {
      opts = opts || {};
      var postBody = null;

      // verify the required parameter 'currency' is set
      if (currency === undefined || currency === null) {
        throw new Error("Missing the required parameter 'currency' when calling userRequestWithdrawal");
      }

      // verify the required parameter 'amount' is set
      if (amount === undefined || amount === null) {
        throw new Error("Missing the required parameter 'amount' when calling userRequestWithdrawal");
      }

      // verify the required parameter 'address' is set
      if (address === undefined || address === null) {
        throw new Error("Missing the required parameter 'address' when calling userRequestWithdrawal");
      }


      var pathParams = {
      };
      var queryParams = {
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
        'otpToken': opts['otpToken'],
        'currency': currency,
        'amount': amount,
        'address': address,
        'fee': opts['fee'],
        'text': opts['text']
      };

      var authNames = ['apiExpires', 'apiKey', 'apiSignature'];
      var contentTypes = ['application/json', 'application/x-www-form-urlencoded'];
      var accepts = ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'];
      var returnType = Transaction;

      return this.apiClient.callApi(
        '/user/requestWithdrawal', 'POST',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the userSavePreferences operation.
     * @callback module:api/UserApi~userSavePreferencesCallback
     * @param {String} error Error message, if any.
     * @param {module:model/User} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Save user preferences.
     * @param {String} prefs 
     * @param {Object} opts Optional parameters
     * @param {Boolean} opts.overwrite If true, will overwrite all existing preferences. (default to false)
     * @param {module:api/UserApi~userSavePreferencesCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/User}
     */
    this.userSavePreferences = function(prefs, opts, callback) {
      opts = opts || {};
      var postBody = null;

      // verify the required parameter 'prefs' is set
      if (prefs === undefined || prefs === null) {
        throw new Error("Missing the required parameter 'prefs' when calling userSavePreferences");
      }


      var pathParams = {
      };
      var queryParams = {
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
        'prefs': prefs,
        'overwrite': opts['overwrite']
      };

      var authNames = ['apiExpires', 'apiKey', 'apiSignature'];
      var contentTypes = ['application/json', 'application/x-www-form-urlencoded'];
      var accepts = ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'];
      var returnType = User;

      return this.apiClient.callApi(
        '/user/preferences', 'POST',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }
  };

  return exports;
}));