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
package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime
import java.util.UUID

case class Instrument (
  symbol: String,
  rootSymbol: Option[String] = None,
  state: Option[String] = None,
  typ: Option[String] = None,
  listing: Option[DateTime] = None,
  front: Option[DateTime] = None,
  expiry: Option[DateTime] = None,
  settle: Option[DateTime] = None,
  relistInterval: Option[DateTime] = None,
  inverseLeg: Option[String] = None,
  sellLeg: Option[String] = None,
  buyLeg: Option[String] = None,
  optionStrikePcnt: Option[Double] = None,
  optionStrikeRound: Option[Double] = None,
  optionStrikePrice: Option[Double] = None,
  optionMultiplier: Option[Double] = None,
  positionCurrency: Option[String] = None,
  underlying: Option[String] = None,
  quoteCurrency: Option[String] = None,
  underlyingSymbol: Option[String] = None,
  reference: Option[String] = None,
  referenceSymbol: Option[String] = None,
  calcInterval: Option[DateTime] = None,
  publishInterval: Option[DateTime] = None,
  publishTime: Option[DateTime] = None,
  maxOrderQty: Option[Double] = None,
  maxPrice: Option[Double] = None,
  lotSize: Option[Double] = None,
  tickSize: Option[Double] = None,
  multiplier: Option[Double] = None,
  settlCurrency: Option[String] = None,
  underlyingToPositionMultiplier: Option[Double] = None,
  underlyingToSettleMultiplier: Option[Double] = None,
  quoteToSettleMultiplier: Option[Double] = None,
  isQuanto: Option[Boolean] = None,
  isInverse: Option[Boolean] = None,
  initMargin: Option[Double] = None,
  maintMargin: Option[Double] = None,
  riskLimit: Option[Double] = None,
  riskStep: Option[Double] = None,
  limit: Option[Double] = None,
  capped: Option[Boolean] = None,
  taxed: Option[Boolean] = None,
  deleverage: Option[Boolean] = None,
  makerFee: Option[Double] = None,
  takerFee: Option[Double] = None,
  settlementFee: Option[Double] = None,
  insuranceFee: Option[Double] = None,
  fundingBaseSymbol: Option[String] = None,
  fundingQuoteSymbol: Option[String] = None,
  fundingPremiumSymbol: Option[String] = None,
  fundingTimestamp: Option[DateTime] = None,
  fundingInterval: Option[DateTime] = None,
  fundingRate: Option[Double] = None,
  indicativeFundingRate: Option[Double] = None,
  rebalanceTimestamp: Option[DateTime] = None,
  rebalanceInterval: Option[DateTime] = None,
  openingTimestamp: Option[DateTime] = None,
  closingTimestamp: Option[DateTime] = None,
  sessionInterval: Option[DateTime] = None,
  prevClosePrice: Option[Double] = None,
  limitDownPrice: Option[Double] = None,
  limitUpPrice: Option[Double] = None,
  bankruptLimitDownPrice: Option[Double] = None,
  bankruptLimitUpPrice: Option[Double] = None,
  prevTotalVolume: Option[Double] = None,
  totalVolume: Option[Double] = None,
  volume: Option[Double] = None,
  volume24h: Option[Double] = None,
  prevTotalTurnover: Option[Double] = None,
  totalTurnover: Option[Double] = None,
  turnover: Option[Double] = None,
  turnover24h: Option[Double] = None,
  homeNotional24h: Option[Double] = None,
  foreignNotional24h: Option[Double] = None,
  prevPrice24h: Option[Double] = None,
  vwap: Option[Double] = None,
  highPrice: Option[Double] = None,
  lowPrice: Option[Double] = None,
  lastPrice: Option[Double] = None,
  lastPriceProtected: Option[Double] = None,
  lastTickDirection: Option[String] = None,
  lastChangePcnt: Option[Double] = None,
  bidPrice: Option[Double] = None,
  midPrice: Option[Double] = None,
  askPrice: Option[Double] = None,
  impactBidPrice: Option[Double] = None,
  impactMidPrice: Option[Double] = None,
  impactAskPrice: Option[Double] = None,
  hasLiquidity: Option[Boolean] = None,
  openInterest: Option[Double] = None,
  openValue: Option[Double] = None,
  fairMethod: Option[String] = None,
  fairBasisRate: Option[Double] = None,
  fairBasis: Option[Double] = None,
  fairPrice: Option[Double] = None,
  markMethod: Option[String] = None,
  markPrice: Option[Double] = None,
  indicativeTaxRate: Option[Double] = None,
  indicativeSettlePrice: Option[Double] = None,
  optionUnderlyingPrice: Option[Double] = None,
  settledPrice: Option[Double] = None,
  timestamp: Option[DateTime] = None
) extends ApiModel


