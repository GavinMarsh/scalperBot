/*
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


package io.swagger.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.math.BigDecimal;
import org.threeten.bp.OffsetDateTime;

/**
 * TradeBin
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2019-12-17T20:26:16.019-05:00")
public class TradeBin {
  @SerializedName("timestamp")
  private OffsetDateTime timestamp = null;

  @SerializedName("symbol")
  private String symbol = null;

  @SerializedName("open")
  private Double open = null;

  @SerializedName("high")
  private Double high = null;

  @SerializedName("low")
  private Double low = null;

  @SerializedName("close")
  private Double close = null;

  @SerializedName("trades")
  private BigDecimal trades = null;

  @SerializedName("volume")
  private BigDecimal volume = null;

  @SerializedName("vwap")
  private Double vwap = null;

  @SerializedName("lastSize")
  private BigDecimal lastSize = null;

  @SerializedName("turnover")
  private BigDecimal turnover = null;

  @SerializedName("homeNotional")
  private Double homeNotional = null;

  @SerializedName("foreignNotional")
  private Double foreignNotional = null;

  public TradeBin timestamp(OffsetDateTime timestamp) {
    this.timestamp = timestamp;
    return this;
  }

   /**
   * Get timestamp
   * @return timestamp
  **/
  @ApiModelProperty(required = true, value = "")
  public OffsetDateTime getTimestamp() {
    return timestamp;
  }

  public void setTimestamp(OffsetDateTime timestamp) {
    this.timestamp = timestamp;
  }

  public TradeBin symbol(String symbol) {
    this.symbol = symbol;
    return this;
  }

   /**
   * Get symbol
   * @return symbol
  **/
  @ApiModelProperty(required = true, value = "")
  public String getSymbol() {
    return symbol;
  }

  public void setSymbol(String symbol) {
    this.symbol = symbol;
  }

  public TradeBin open(Double open) {
    this.open = open;
    return this;
  }

   /**
   * Get open
   * @return open
  **/
  @ApiModelProperty(value = "")
  public Double getOpen() {
    return open;
  }

  public void setOpen(Double open) {
    this.open = open;
  }

  public TradeBin high(Double high) {
    this.high = high;
    return this;
  }

   /**
   * Get high
   * @return high
  **/
  @ApiModelProperty(value = "")
  public Double getHigh() {
    return high;
  }

  public void setHigh(Double high) {
    this.high = high;
  }

  public TradeBin low(Double low) {
    this.low = low;
    return this;
  }

   /**
   * Get low
   * @return low
  **/
  @ApiModelProperty(value = "")
  public Double getLow() {
    return low;
  }

  public void setLow(Double low) {
    this.low = low;
  }

  public TradeBin close(Double close) {
    this.close = close;
    return this;
  }

   /**
   * Get close
   * @return close
  **/
  @ApiModelProperty(value = "")
  public Double getClose() {
    return close;
  }

  public void setClose(Double close) {
    this.close = close;
  }

  public TradeBin trades(BigDecimal trades) {
    this.trades = trades;
    return this;
  }

   /**
   * Get trades
   * @return trades
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getTrades() {
    return trades;
  }

  public void setTrades(BigDecimal trades) {
    this.trades = trades;
  }

  public TradeBin volume(BigDecimal volume) {
    this.volume = volume;
    return this;
  }

   /**
   * Get volume
   * @return volume
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getVolume() {
    return volume;
  }

  public void setVolume(BigDecimal volume) {
    this.volume = volume;
  }

  public TradeBin vwap(Double vwap) {
    this.vwap = vwap;
    return this;
  }

   /**
   * Get vwap
   * @return vwap
  **/
  @ApiModelProperty(value = "")
  public Double getVwap() {
    return vwap;
  }

  public void setVwap(Double vwap) {
    this.vwap = vwap;
  }

  public TradeBin lastSize(BigDecimal lastSize) {
    this.lastSize = lastSize;
    return this;
  }

   /**
   * Get lastSize
   * @return lastSize
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getLastSize() {
    return lastSize;
  }

  public void setLastSize(BigDecimal lastSize) {
    this.lastSize = lastSize;
  }

  public TradeBin turnover(BigDecimal turnover) {
    this.turnover = turnover;
    return this;
  }

   /**
   * Get turnover
   * @return turnover
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getTurnover() {
    return turnover;
  }

  public void setTurnover(BigDecimal turnover) {
    this.turnover = turnover;
  }

  public TradeBin homeNotional(Double homeNotional) {
    this.homeNotional = homeNotional;
    return this;
  }

   /**
   * Get homeNotional
   * @return homeNotional
  **/
  @ApiModelProperty(value = "")
  public Double getHomeNotional() {
    return homeNotional;
  }

  public void setHomeNotional(Double homeNotional) {
    this.homeNotional = homeNotional;
  }

  public TradeBin foreignNotional(Double foreignNotional) {
    this.foreignNotional = foreignNotional;
    return this;
  }

   /**
   * Get foreignNotional
   * @return foreignNotional
  **/
  @ApiModelProperty(value = "")
  public Double getForeignNotional() {
    return foreignNotional;
  }

  public void setForeignNotional(Double foreignNotional) {
    this.foreignNotional = foreignNotional;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TradeBin tradeBin = (TradeBin) o;
    return Objects.equals(this.timestamp, tradeBin.timestamp) &&
        Objects.equals(this.symbol, tradeBin.symbol) &&
        Objects.equals(this.open, tradeBin.open) &&
        Objects.equals(this.high, tradeBin.high) &&
        Objects.equals(this.low, tradeBin.low) &&
        Objects.equals(this.close, tradeBin.close) &&
        Objects.equals(this.trades, tradeBin.trades) &&
        Objects.equals(this.volume, tradeBin.volume) &&
        Objects.equals(this.vwap, tradeBin.vwap) &&
        Objects.equals(this.lastSize, tradeBin.lastSize) &&
        Objects.equals(this.turnover, tradeBin.turnover) &&
        Objects.equals(this.homeNotional, tradeBin.homeNotional) &&
        Objects.equals(this.foreignNotional, tradeBin.foreignNotional);
  }

  @Override
  public int hashCode() {
    return Objects.hash(timestamp, symbol, open, high, low, close, trades, volume, vwap, lastSize, turnover, homeNotional, foreignNotional);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TradeBin {\n");
    
    sb.append("    timestamp: ").append(toIndentedString(timestamp)).append("\n");
    sb.append("    symbol: ").append(toIndentedString(symbol)).append("\n");
    sb.append("    open: ").append(toIndentedString(open)).append("\n");
    sb.append("    high: ").append(toIndentedString(high)).append("\n");
    sb.append("    low: ").append(toIndentedString(low)).append("\n");
    sb.append("    close: ").append(toIndentedString(close)).append("\n");
    sb.append("    trades: ").append(toIndentedString(trades)).append("\n");
    sb.append("    volume: ").append(toIndentedString(volume)).append("\n");
    sb.append("    vwap: ").append(toIndentedString(vwap)).append("\n");
    sb.append("    lastSize: ").append(toIndentedString(lastSize)).append("\n");
    sb.append("    turnover: ").append(toIndentedString(turnover)).append("\n");
    sb.append("    homeNotional: ").append(toIndentedString(homeNotional)).append("\n");
    sb.append("    foreignNotional: ").append(toIndentedString(foreignNotional)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}

