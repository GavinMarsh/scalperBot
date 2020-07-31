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

/**
 * Account Notifications
 **/
@ApiModel(description = "Account Notifications")
public class GlobalNotification {
  
  @SerializedName("id")
  private BigDecimal id = null;
  @SerializedName("date")
  private Date date = null;
  @SerializedName("title")
  private String title = null;
  @SerializedName("body")
  private String body = null;
  @SerializedName("ttl")
  private BigDecimal ttl = null;
  public enum TypeEnum {
     success,  error,  info, 
  };
  @SerializedName("type")
  private TypeEnum type = null;
  @SerializedName("closable")
  private Boolean closable = null;
  @SerializedName("persist")
  private Boolean persist = null;
  @SerializedName("waitForVisibility")
  private Boolean waitForVisibility = null;
  @SerializedName("sound")
  private String sound = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getId() {
    return id;
  }
  public void setId(BigDecimal id) {
    this.id = id;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public Date getDate() {
    return date;
  }
  public void setDate(Date date) {
    this.date = date;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getBody() {
    return body;
  }
  public void setBody(String body) {
    this.body = body;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public BigDecimal getTtl() {
    return ttl;
  }
  public void setTtl(BigDecimal ttl) {
    this.ttl = ttl;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public TypeEnum getType() {
    return type;
  }
  public void setType(TypeEnum type) {
    this.type = type;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getClosable() {
    return closable;
  }
  public void setClosable(Boolean closable) {
    this.closable = closable;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getPersist() {
    return persist;
  }
  public void setPersist(Boolean persist) {
    this.persist = persist;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getWaitForVisibility() {
    return waitForVisibility;
  }
  public void setWaitForVisibility(Boolean waitForVisibility) {
    this.waitForVisibility = waitForVisibility;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getSound() {
    return sound;
  }
  public void setSound(String sound) {
    this.sound = sound;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    GlobalNotification globalNotification = (GlobalNotification) o;
    return (this.id == null ? globalNotification.id == null : this.id.equals(globalNotification.id)) &&
        (this.date == null ? globalNotification.date == null : this.date.equals(globalNotification.date)) &&
        (this.title == null ? globalNotification.title == null : this.title.equals(globalNotification.title)) &&
        (this.body == null ? globalNotification.body == null : this.body.equals(globalNotification.body)) &&
        (this.ttl == null ? globalNotification.ttl == null : this.ttl.equals(globalNotification.ttl)) &&
        (this.type == null ? globalNotification.type == null : this.type.equals(globalNotification.type)) &&
        (this.closable == null ? globalNotification.closable == null : this.closable.equals(globalNotification.closable)) &&
        (this.persist == null ? globalNotification.persist == null : this.persist.equals(globalNotification.persist)) &&
        (this.waitForVisibility == null ? globalNotification.waitForVisibility == null : this.waitForVisibility.equals(globalNotification.waitForVisibility)) &&
        (this.sound == null ? globalNotification.sound == null : this.sound.equals(globalNotification.sound));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.date == null ? 0: this.date.hashCode());
    result = 31 * result + (this.title == null ? 0: this.title.hashCode());
    result = 31 * result + (this.body == null ? 0: this.body.hashCode());
    result = 31 * result + (this.ttl == null ? 0: this.ttl.hashCode());
    result = 31 * result + (this.type == null ? 0: this.type.hashCode());
    result = 31 * result + (this.closable == null ? 0: this.closable.hashCode());
    result = 31 * result + (this.persist == null ? 0: this.persist.hashCode());
    result = 31 * result + (this.waitForVisibility == null ? 0: this.waitForVisibility.hashCode());
    result = 31 * result + (this.sound == null ? 0: this.sound.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class GlobalNotification {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  date: ").append(date).append("\n");
    sb.append("  title: ").append(title).append("\n");
    sb.append("  body: ").append(body).append("\n");
    sb.append("  ttl: ").append(ttl).append("\n");
    sb.append("  type: ").append(type).append("\n");
    sb.append("  closable: ").append(closable).append("\n");
    sb.append("  persist: ").append(persist).append("\n");
    sb.append("  waitForVisibility: ").append(waitForVisibility).append("\n");
    sb.append("  sound: ").append(sound).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
