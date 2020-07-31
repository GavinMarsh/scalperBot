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

package io.swagger.client.model;

import java.math.BigDecimal;
import java.util.Date;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class TradeBin {
  
  @SerializedName("timestamp")
  private Date timestamp = null;
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

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public Date getTimestamp() {
    return timestamp;
  }
  public void setTimestamp(Date timestamp) {
    this.timestamp = timestamp;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getSymbol() {
    return symbol;
  }
  public void setSymbol(String symbol) {
    this.symbol = symbol;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Double getOpen() {
    return open;
  }
  public void setOpen(Double open) {
    this.open = open;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Double getHigh() {
    return high;
  }
  public void setHigh(Double high) {
    this.high = high;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Double getLow() {
    return low;
  }
  public void setLow(Double low) {
    this.low = low;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Double getClose() {
    return close;
  }
  public void setClose(Double close) {
    this.close = close;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getTrades() {
    return trades;
  }
  public void setTrades(BigDecimal trades) {
    this.trades = trades;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getVolume() {
    return volume;
  }
  public void setVolume(BigDecimal volume) {
    this.volume = volume;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Double getVwap() {
    return vwap;
  }
  public void setVwap(Double vwap) {
    this.vwap = vwap;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getLastSize() {
    return lastSize;
  }
  public void setLastSize(BigDecimal lastSize) {
    this.lastSize = lastSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getTurnover() {
    return turnover;
  }
  public void setTurnover(BigDecimal turnover) {
    this.turnover = turnover;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Double getHomeNotional() {
    return homeNotional;
  }
  public void setHomeNotional(Double homeNotional) {
    this.homeNotional = homeNotional;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Double getForeignNotional() {
    return foreignNotional;
  }
  public void setForeignNotional(Double foreignNotional) {
    this.foreignNotional = foreignNotional;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TradeBin tradeBin = (TradeBin) o;
    return (this.timestamp == null ? tradeBin.timestamp == null : this.timestamp.equals(tradeBin.timestamp)) &&
        (this.symbol == null ? tradeBin.symbol == null : this.symbol.equals(tradeBin.symbol)) &&
        (this.open == null ? tradeBin.open == null : this.open.equals(tradeBin.open)) &&
        (this.high == null ? tradeBin.high == null : this.high.equals(tradeBin.high)) &&
        (this.low == null ? tradeBin.low == null : this.low.equals(tradeBin.low)) &&
        (this.close == null ? tradeBin.close == null : this.close.equals(tradeBin.close)) &&
        (this.trades == null ? tradeBin.trades == null : this.trades.equals(tradeBin.trades)) &&
        (this.volume == null ? tradeBin.volume == null : this.volume.equals(tradeBin.volume)) &&
        (this.vwap == null ? tradeBin.vwap == null : this.vwap.equals(tradeBin.vwap)) &&
        (this.lastSize == null ? tradeBin.lastSize == null : this.lastSize.equals(tradeBin.lastSize)) &&
        (this.turnover == null ? tradeBin.turnover == null : this.turnover.equals(tradeBin.turnover)) &&
        (this.homeNotional == null ? tradeBin.homeNotional == null : this.homeNotional.equals(tradeBin.homeNotional)) &&
        (this.foreignNotional == null ? tradeBin.foreignNotional == null : this.foreignNotional.equals(tradeBin.foreignNotional));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.timestamp == null ? 0: this.timestamp.hashCode());
    result = 31 * result + (this.symbol == null ? 0: this.symbol.hashCode());
    result = 31 * result + (this.open == null ? 0: this.open.hashCode());
    result = 31 * result + (this.high == null ? 0: this.high.hashCode());
    result = 31 * result + (this.low == null ? 0: this.low.hashCode());
    result = 31 * result + (this.close == null ? 0: this.close.hashCode());
    result = 31 * result + (this.trades == null ? 0: this.trades.hashCode());
    result = 31 * result + (this.volume == null ? 0: this.volume.hashCode());
    result = 31 * result + (this.vwap == null ? 0: this.vwap.hashCode());
    result = 31 * result + (this.lastSize == null ? 0: this.lastSize.hashCode());
    result = 31 * result + (this.turnover == null ? 0: this.turnover.hashCode());
    result = 31 * result + (this.homeNotional == null ? 0: this.homeNotional.hashCode());
    result = 31 * result + (this.foreignNotional == null ? 0: this.foreignNotional.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class TradeBin {\n");
    
    sb.append("  timestamp: ").append(timestamp).append("\n");
    sb.append("  symbol: ").append(symbol).append("\n");
    sb.append("  open: ").append(open).append("\n");
    sb.append("  high: ").append(high).append("\n");
    sb.append("  low: ").append(low).append("\n");
    sb.append("  close: ").append(close).append("\n");
    sb.append("  trades: ").append(trades).append("\n");
    sb.append("  volume: ").append(volume).append("\n");
    sb.append("  vwap: ").append(vwap).append("\n");
    sb.append("  lastSize: ").append(lastSize).append("\n");
    sb.append("  turnover: ").append(turnover).append("\n");
    sb.append("  homeNotional: ").append(homeNotional).append("\n");
    sb.append("  foreignNotional: ").append(foreignNotional).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
