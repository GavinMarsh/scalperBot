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
    // AMD.
    define(['expect.js', '../../src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require('../../src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.BitMexApi);
  }
}(this, function(expect, BitMexApi) {
  'use strict';

  var instance;

  describe('(package)', function() {
    describe('TradeBin', function() {
      beforeEach(function() {
        instance = new BitMexApi.TradeBin();
      });

      it('should create an instance of TradeBin', function() {
        // TODO: update the code to test TradeBin
        expect(instance).to.be.a(BitMexApi.TradeBin);
      });

      it('should have the property timestamp (base name: "timestamp")', function() {
        // TODO: update the code to test the property timestamp
        expect(instance).to.have.property('timestamp');
        // expect(instance.timestamp).to.be(expectedValueLiteral);
      });

      it('should have the property symbol (base name: "symbol")', function() {
        // TODO: update the code to test the property symbol
        expect(instance).to.have.property('symbol');
        // expect(instance.symbol).to.be(expectedValueLiteral);
      });

      it('should have the property open (base name: "open")', function() {
        // TODO: update the code to test the property open
        expect(instance).to.have.property('open');
        // expect(instance.open).to.be(expectedValueLiteral);
      });

      it('should have the property high (base name: "high")', function() {
        // TODO: update the code to test the property high
        expect(instance).to.have.property('high');
        // expect(instance.high).to.be(expectedValueLiteral);
      });

      it('should have the property low (base name: "low")', function() {
        // TODO: update the code to test the property low
        expect(instance).to.have.property('low');
        // expect(instance.low).to.be(expectedValueLiteral);
      });

      it('should have the property close (base name: "close")', function() {
        // TODO: update the code to test the property close
        expect(instance).to.have.property('close');
        // expect(instance.close).to.be(expectedValueLiteral);
      });

      it('should have the property trades (base name: "trades")', function() {
        // TODO: update the code to test the property trades
        expect(instance).to.have.property('trades');
        // expect(instance.trades).to.be(expectedValueLiteral);
      });

      it('should have the property volume (base name: "volume")', function() {
        // TODO: update the code to test the property volume
        expect(instance).to.have.property('volume');
        // expect(instance.volume).to.be(expectedValueLiteral);
      });

      it('should have the property vwap (base name: "vwap")', function() {
        // TODO: update the code to test the property vwap
        expect(instance).to.have.property('vwap');
        // expect(instance.vwap).to.be(expectedValueLiteral);
      });

      it('should have the property lastSize (base name: "lastSize")', function() {
        // TODO: update the code to test the property lastSize
        expect(instance).to.have.property('lastSize');
        // expect(instance.lastSize).to.be(expectedValueLiteral);
      });

      it('should have the property turnover (base name: "turnover")', function() {
        // TODO: update the code to test the property turnover
        expect(instance).to.have.property('turnover');
        // expect(instance.turnover).to.be(expectedValueLiteral);
      });

      it('should have the property homeNotional (base name: "homeNotional")', function() {
        // TODO: update the code to test the property homeNotional
        expect(instance).to.have.property('homeNotional');
        // expect(instance.homeNotional).to.be(expectedValueLiteral);
      });

      it('should have the property foreignNotional (base name: "foreignNotional")', function() {
        // TODO: update the code to test the property foreignNotional
        expect(instance).to.have.property('foreignNotional');
        // expect(instance.foreignNotional).to.be(expectedValueLiteral);
      });

    });
  });

}));
