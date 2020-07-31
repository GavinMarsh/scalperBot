/* 
 * BitMEX API
 *
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */


using NUnit.Framework;

using System;
using System.Linq;
using System.IO;
using System.Collections.Generic;
using IO.Swagger.Api;
using IO.Swagger.Model;
using IO.Swagger.Client;
using System.Reflection;
using Newtonsoft.Json;

namespace IO.Swagger.Test
{
    /// <summary>
    ///  Class for testing Wallet
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the model.
    /// </remarks>
    [TestFixture]
    public class WalletTests
    {
        // TODO uncomment below to declare an instance variable for Wallet
        //private Wallet instance;

        /// <summary>
        /// Setup before each test
        /// </summary>
        [SetUp]
        public void Init()
        {
            // TODO uncomment below to create an instance of Wallet
            //instance = new Wallet();
        }

        /// <summary>
        /// Clean up after each test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of Wallet
        /// </summary>
        [Test]
        public void WalletInstanceTest()
        {
            // TODO uncomment below to test "IsInstanceOfType" Wallet
            //Assert.IsInstanceOfType<Wallet> (instance, "variable 'instance' is a Wallet");
        }


        /// <summary>
        /// Test the property 'Account'
        /// </summary>
        [Test]
        public void AccountTest()
        {
            // TODO unit test for the property 'Account'
        }
        /// <summary>
        /// Test the property 'Currency'
        /// </summary>
        [Test]
        public void CurrencyTest()
        {
            // TODO unit test for the property 'Currency'
        }
        /// <summary>
        /// Test the property 'PrevDeposited'
        /// </summary>
        [Test]
        public void PrevDepositedTest()
        {
            // TODO unit test for the property 'PrevDeposited'
        }
        /// <summary>
        /// Test the property 'PrevWithdrawn'
        /// </summary>
        [Test]
        public void PrevWithdrawnTest()
        {
            // TODO unit test for the property 'PrevWithdrawn'
        }
        /// <summary>
        /// Test the property 'PrevTransferIn'
        /// </summary>
        [Test]
        public void PrevTransferInTest()
        {
            // TODO unit test for the property 'PrevTransferIn'
        }
        /// <summary>
        /// Test the property 'PrevTransferOut'
        /// </summary>
        [Test]
        public void PrevTransferOutTest()
        {
            // TODO unit test for the property 'PrevTransferOut'
        }
        /// <summary>
        /// Test the property 'PrevAmount'
        /// </summary>
        [Test]
        public void PrevAmountTest()
        {
            // TODO unit test for the property 'PrevAmount'
        }
        /// <summary>
        /// Test the property 'PrevTimestamp'
        /// </summary>
        [Test]
        public void PrevTimestampTest()
        {
            // TODO unit test for the property 'PrevTimestamp'
        }
        /// <summary>
        /// Test the property 'DeltaDeposited'
        /// </summary>
        [Test]
        public void DeltaDepositedTest()
        {
            // TODO unit test for the property 'DeltaDeposited'
        }
        /// <summary>
        /// Test the property 'DeltaWithdrawn'
        /// </summary>
        [Test]
        public void DeltaWithdrawnTest()
        {
            // TODO unit test for the property 'DeltaWithdrawn'
        }
        /// <summary>
        /// Test the property 'DeltaTransferIn'
        /// </summary>
        [Test]
        public void DeltaTransferInTest()
        {
            // TODO unit test for the property 'DeltaTransferIn'
        }
        /// <summary>
        /// Test the property 'DeltaTransferOut'
        /// </summary>
        [Test]
        public void DeltaTransferOutTest()
        {
            // TODO unit test for the property 'DeltaTransferOut'
        }
        /// <summary>
        /// Test the property 'DeltaAmount'
        /// </summary>
        [Test]
        public void DeltaAmountTest()
        {
            // TODO unit test for the property 'DeltaAmount'
        }
        /// <summary>
        /// Test the property 'Deposited'
        /// </summary>
        [Test]
        public void DepositedTest()
        {
            // TODO unit test for the property 'Deposited'
        }
        /// <summary>
        /// Test the property 'Withdrawn'
        /// </summary>
        [Test]
        public void WithdrawnTest()
        {
            // TODO unit test for the property 'Withdrawn'
        }
        /// <summary>
        /// Test the property 'TransferIn'
        /// </summary>
        [Test]
        public void TransferInTest()
        {
            // TODO unit test for the property 'TransferIn'
        }
        /// <summary>
        /// Test the property 'TransferOut'
        /// </summary>
        [Test]
        public void TransferOutTest()
        {
            // TODO unit test for the property 'TransferOut'
        }
        /// <summary>
        /// Test the property 'Amount'
        /// </summary>
        [Test]
        public void AmountTest()
        {
            // TODO unit test for the property 'Amount'
        }
        /// <summary>
        /// Test the property 'PendingCredit'
        /// </summary>
        [Test]
        public void PendingCreditTest()
        {
            // TODO unit test for the property 'PendingCredit'
        }
        /// <summary>
        /// Test the property 'PendingDebit'
        /// </summary>
        [Test]
        public void PendingDebitTest()
        {
            // TODO unit test for the property 'PendingDebit'
        }
        /// <summary>
        /// Test the property 'ConfirmedDebit'
        /// </summary>
        [Test]
        public void ConfirmedDebitTest()
        {
            // TODO unit test for the property 'ConfirmedDebit'
        }
        /// <summary>
        /// Test the property 'Timestamp'
        /// </summary>
        [Test]
        public void TimestampTest()
        {
            // TODO unit test for the property 'Timestamp'
        }
        /// <summary>
        /// Test the property 'Addr'
        /// </summary>
        [Test]
        public void AddrTest()
        {
            // TODO unit test for the property 'Addr'
        }
        /// <summary>
        /// Test the property 'Script'
        /// </summary>
        [Test]
        public void ScriptTest()
        {
            // TODO unit test for the property 'Script'
        }
        /// <summary>
        /// Test the property 'WithdrawalLock'
        /// </summary>
        [Test]
        public void WithdrawalLockTest()
        {
            // TODO unit test for the property 'WithdrawalLock'
        }

    }

}
