/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "ib_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace sharp { namespace api {


PingRequest::~PingRequest() throw() {
}


const char* PingRequest::ascii_fingerprint = "99914B932BD37A50B983C5E7C90AE93B";
const uint8_t PingRequest::binary_fingerprint[16] = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

uint32_t PingRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    xfer += iprot->skip(ftype);
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t PingRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("PingRequest");

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(PingRequest &a, PingRequest &b) {
  using ::std::swap;
  (void) a;
  (void) b;
}

PingRequest::PingRequest(const PingRequest& other0) {
  (void) other0;
}
PingRequest& PingRequest::operator=(const PingRequest& other1) {
  (void) other1;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const PingRequest& obj) {
  using apache::thrift::to_string;
  (void) obj;
  out << "PingRequest(";
  out << ")";
  return out;
}


PingResponse::~PingResponse() throw() {
}


const char* PingResponse::ascii_fingerprint = "99914B932BD37A50B983C5E7C90AE93B";
const uint8_t PingResponse::binary_fingerprint[16] = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

uint32_t PingResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    xfer += iprot->skip(ftype);
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t PingResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("PingResponse");

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(PingResponse &a, PingResponse &b) {
  using ::std::swap;
  (void) a;
  (void) b;
}

PingResponse::PingResponse(const PingResponse& other2) {
  (void) other2;
}
PingResponse& PingResponse::operator=(const PingResponse& other3) {
  (void) other3;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const PingResponse& obj) {
  using apache::thrift::to_string;
  (void) obj;
  out << "PingResponse(";
  out << ")";
  return out;
}


ContractRequest::~ContractRequest() throw() {
}


void ContractRequest::__set_symbol(const std::string& val) {
  this->symbol = val;
}

void ContractRequest::__set_secType(const std::string& val) {
  this->secType = val;
}

void ContractRequest::__set_exchange(const std::string& val) {
  this->exchange = val;
}

void ContractRequest::__set_currency(const std::string& val) {
  this->currency = val;
}

const char* ContractRequest::ascii_fingerprint = "C93D890311F28844166CF6E571EB3AC2";
const uint8_t ContractRequest::binary_fingerprint[16] = {0xC9,0x3D,0x89,0x03,0x11,0xF2,0x88,0x44,0x16,0x6C,0xF6,0xE5,0x71,0xEB,0x3A,0xC2};

uint32_t ContractRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_symbol = false;
  bool isset_secType = false;
  bool isset_exchange = false;
  bool isset_currency = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->symbol);
          isset_symbol = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->secType);
          isset_secType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->exchange);
          isset_exchange = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->currency);
          isset_currency = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_symbol)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_secType)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_exchange)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_currency)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t ContractRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("ContractRequest");

  xfer += oprot->writeFieldBegin("symbol", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->symbol);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("secType", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->secType);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("exchange", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->exchange);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("currency", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->currency);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(ContractRequest &a, ContractRequest &b) {
  using ::std::swap;
  swap(a.symbol, b.symbol);
  swap(a.secType, b.secType);
  swap(a.exchange, b.exchange);
  swap(a.currency, b.currency);
}

ContractRequest::ContractRequest(const ContractRequest& other4) {
  symbol = other4.symbol;
  secType = other4.secType;
  exchange = other4.exchange;
  currency = other4.currency;
}
ContractRequest& ContractRequest::operator=(const ContractRequest& other5) {
  symbol = other5.symbol;
  secType = other5.secType;
  exchange = other5.exchange;
  currency = other5.currency;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const ContractRequest& obj) {
  using apache::thrift::to_string;
  out << "ContractRequest(";
  out << "symbol=" << to_string(obj.symbol);
  out << ", " << "secType=" << to_string(obj.secType);
  out << ", " << "exchange=" << to_string(obj.exchange);
  out << ", " << "currency=" << to_string(obj.currency);
  out << ")";
  return out;
}


OrderRequest::~OrderRequest() throw() {
}


void OrderRequest::__set_action(const std::string& val) {
  this->action = val;
}

void OrderRequest::__set_totalQuantity(const int64_t val) {
  this->totalQuantity = val;
}

void OrderRequest::__set_orderType(const std::string& val) {
  this->orderType = val;
}

void OrderRequest::__set_lmtPrice(const double val) {
  this->lmtPrice = val;
}

const char* OrderRequest::ascii_fingerprint = "BDADCF4D7224A335D3343EB69F43C773";
const uint8_t OrderRequest::binary_fingerprint[16] = {0xBD,0xAD,0xCF,0x4D,0x72,0x24,0xA3,0x35,0xD3,0x34,0x3E,0xB6,0x9F,0x43,0xC7,0x73};

uint32_t OrderRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_action = false;
  bool isset_totalQuantity = false;
  bool isset_orderType = false;
  bool isset_lmtPrice = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->action);
          isset_action = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->totalQuantity);
          isset_totalQuantity = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->orderType);
          isset_orderType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->lmtPrice);
          isset_lmtPrice = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_action)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_totalQuantity)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_orderType)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_lmtPrice)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t OrderRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("OrderRequest");

  xfer += oprot->writeFieldBegin("action", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->action);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("totalQuantity", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->totalQuantity);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("orderType", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->orderType);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("lmtPrice", ::apache::thrift::protocol::T_DOUBLE, 5);
  xfer += oprot->writeDouble(this->lmtPrice);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(OrderRequest &a, OrderRequest &b) {
  using ::std::swap;
  swap(a.action, b.action);
  swap(a.totalQuantity, b.totalQuantity);
  swap(a.orderType, b.orderType);
  swap(a.lmtPrice, b.lmtPrice);
}

OrderRequest::OrderRequest(const OrderRequest& other6) {
  action = other6.action;
  totalQuantity = other6.totalQuantity;
  orderType = other6.orderType;
  lmtPrice = other6.lmtPrice;
}
OrderRequest& OrderRequest::operator=(const OrderRequest& other7) {
  action = other7.action;
  totalQuantity = other7.totalQuantity;
  orderType = other7.orderType;
  lmtPrice = other7.lmtPrice;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const OrderRequest& obj) {
  using apache::thrift::to_string;
  out << "OrderRequest(";
  out << "action=" << to_string(obj.action);
  out << ", " << "totalQuantity=" << to_string(obj.totalQuantity);
  out << ", " << "orderType=" << to_string(obj.orderType);
  out << ", " << "lmtPrice=" << to_string(obj.lmtPrice);
  out << ")";
  return out;
}


OrderResponse::~OrderResponse() throw() {
}


void OrderResponse::__set_orderId(const int64_t val) {
  this->orderId = val;
}

void OrderResponse::__set_state(const int16_t val) {
  this->state = val;
}

void OrderResponse::__set_status(const std::string& val) {
  this->status = val;
__isset.status = true;
}

void OrderResponse::__set_filled(const int32_t val) {
  this->filled = val;
__isset.filled = true;
}

void OrderResponse::__set_remaining(const int32_t val) {
  this->remaining = val;
__isset.remaining = true;
}

void OrderResponse::__set_avgFillPrice(const double val) {
  this->avgFillPrice = val;
__isset.avgFillPrice = true;
}

void OrderResponse::__set_permId(const int32_t val) {
  this->permId = val;
__isset.permId = true;
}

void OrderResponse::__set_parentId(const int32_t val) {
  this->parentId = val;
__isset.parentId = true;
}

void OrderResponse::__set_lastFillPrice(const double val) {
  this->lastFillPrice = val;
__isset.lastFillPrice = true;
}

void OrderResponse::__set_clientId(const int32_t val) {
  this->clientId = val;
__isset.clientId = true;
}

void OrderResponse::__set_whyHeld(const std::string& val) {
  this->whyHeld = val;
__isset.whyHeld = true;
}

const char* OrderResponse::ascii_fingerprint = "DE64BB3AB12A58E9E9ED648EA2133E36";
const uint8_t OrderResponse::binary_fingerprint[16] = {0xDE,0x64,0xBB,0x3A,0xB1,0x2A,0x58,0xE9,0xE9,0xED,0x64,0x8E,0xA2,0x13,0x3E,0x36};

uint32_t OrderResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_orderId = false;
  bool isset_state = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->orderId);
          isset_orderId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->state);
          isset_state = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->status);
          this->__isset.status = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->filled);
          this->__isset.filled = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->remaining);
          this->__isset.remaining = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->avgFillPrice);
          this->__isset.avgFillPrice = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->permId);
          this->__isset.permId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->parentId);
          this->__isset.parentId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->lastFillPrice);
          this->__isset.lastFillPrice = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->clientId);
          this->__isset.clientId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->whyHeld);
          this->__isset.whyHeld = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_orderId)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_state)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t OrderResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("OrderResponse");

  xfer += oprot->writeFieldBegin("orderId", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->orderId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("state", ::apache::thrift::protocol::T_I16, 2);
  xfer += oprot->writeI16(this->state);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.status) {
    xfer += oprot->writeFieldBegin("status", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeString(this->status);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.filled) {
    xfer += oprot->writeFieldBegin("filled", ::apache::thrift::protocol::T_I32, 4);
    xfer += oprot->writeI32(this->filled);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.remaining) {
    xfer += oprot->writeFieldBegin("remaining", ::apache::thrift::protocol::T_I32, 5);
    xfer += oprot->writeI32(this->remaining);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.avgFillPrice) {
    xfer += oprot->writeFieldBegin("avgFillPrice", ::apache::thrift::protocol::T_DOUBLE, 6);
    xfer += oprot->writeDouble(this->avgFillPrice);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.permId) {
    xfer += oprot->writeFieldBegin("permId", ::apache::thrift::protocol::T_I32, 7);
    xfer += oprot->writeI32(this->permId);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.parentId) {
    xfer += oprot->writeFieldBegin("parentId", ::apache::thrift::protocol::T_I32, 8);
    xfer += oprot->writeI32(this->parentId);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.lastFillPrice) {
    xfer += oprot->writeFieldBegin("lastFillPrice", ::apache::thrift::protocol::T_DOUBLE, 9);
    xfer += oprot->writeDouble(this->lastFillPrice);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.clientId) {
    xfer += oprot->writeFieldBegin("clientId", ::apache::thrift::protocol::T_I32, 10);
    xfer += oprot->writeI32(this->clientId);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.whyHeld) {
    xfer += oprot->writeFieldBegin("whyHeld", ::apache::thrift::protocol::T_STRING, 11);
    xfer += oprot->writeString(this->whyHeld);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(OrderResponse &a, OrderResponse &b) {
  using ::std::swap;
  swap(a.orderId, b.orderId);
  swap(a.state, b.state);
  swap(a.status, b.status);
  swap(a.filled, b.filled);
  swap(a.remaining, b.remaining);
  swap(a.avgFillPrice, b.avgFillPrice);
  swap(a.permId, b.permId);
  swap(a.parentId, b.parentId);
  swap(a.lastFillPrice, b.lastFillPrice);
  swap(a.clientId, b.clientId);
  swap(a.whyHeld, b.whyHeld);
  swap(a.__isset, b.__isset);
}

OrderResponse::OrderResponse(const OrderResponse& other8) {
  orderId = other8.orderId;
  state = other8.state;
  status = other8.status;
  filled = other8.filled;
  remaining = other8.remaining;
  avgFillPrice = other8.avgFillPrice;
  permId = other8.permId;
  parentId = other8.parentId;
  lastFillPrice = other8.lastFillPrice;
  clientId = other8.clientId;
  whyHeld = other8.whyHeld;
  __isset = other8.__isset;
}
OrderResponse& OrderResponse::operator=(const OrderResponse& other9) {
  orderId = other9.orderId;
  state = other9.state;
  status = other9.status;
  filled = other9.filled;
  remaining = other9.remaining;
  avgFillPrice = other9.avgFillPrice;
  permId = other9.permId;
  parentId = other9.parentId;
  lastFillPrice = other9.lastFillPrice;
  clientId = other9.clientId;
  whyHeld = other9.whyHeld;
  __isset = other9.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const OrderResponse& obj) {
  using apache::thrift::to_string;
  out << "OrderResponse(";
  out << "orderId=" << to_string(obj.orderId);
  out << ", " << "state=" << to_string(obj.state);
  out << ", " << "status="; (obj.__isset.status ? (out << to_string(obj.status)) : (out << "<null>"));
  out << ", " << "filled="; (obj.__isset.filled ? (out << to_string(obj.filled)) : (out << "<null>"));
  out << ", " << "remaining="; (obj.__isset.remaining ? (out << to_string(obj.remaining)) : (out << "<null>"));
  out << ", " << "avgFillPrice="; (obj.__isset.avgFillPrice ? (out << to_string(obj.avgFillPrice)) : (out << "<null>"));
  out << ", " << "permId="; (obj.__isset.permId ? (out << to_string(obj.permId)) : (out << "<null>"));
  out << ", " << "parentId="; (obj.__isset.parentId ? (out << to_string(obj.parentId)) : (out << "<null>"));
  out << ", " << "lastFillPrice="; (obj.__isset.lastFillPrice ? (out << to_string(obj.lastFillPrice)) : (out << "<null>"));
  out << ", " << "clientId="; (obj.__isset.clientId ? (out << to_string(obj.clientId)) : (out << "<null>"));
  out << ", " << "whyHeld="; (obj.__isset.whyHeld ? (out << to_string(obj.whyHeld)) : (out << "<null>"));
  out << ")";
  return out;
}


Exception::~Exception() throw() {
}


void Exception::__set_what(const int32_t val) {
  this->what = val;
}

void Exception::__set_why(const std::string& val) {
  this->why = val;
}

const char* Exception::ascii_fingerprint = "3F5FC93B338687BC7235B1AB103F47B3";
const uint8_t Exception::binary_fingerprint[16] = {0x3F,0x5F,0xC9,0x3B,0x33,0x86,0x87,0xBC,0x72,0x35,0xB1,0xAB,0x10,0x3F,0x47,0xB3};

uint32_t Exception::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->what);
          this->__isset.what = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->why);
          this->__isset.why = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Exception::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("Exception");

  xfer += oprot->writeFieldBegin("what", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->what);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("why", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->why);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(Exception &a, Exception &b) {
  using ::std::swap;
  swap(a.what, b.what);
  swap(a.why, b.why);
  swap(a.__isset, b.__isset);
}

Exception::Exception(const Exception& other10) : TException() {
  what = other10.what;
  why = other10.why;
  __isset = other10.__isset;
}
Exception& Exception::operator=(const Exception& other11) {
  what = other11.what;
  why = other11.why;
  __isset = other11.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const Exception& obj) {
  using apache::thrift::to_string;
  out << "Exception(";
  out << "what=" << to_string(obj.what);
  out << ", " << "why=" << to_string(obj.why);
  out << ")";
  return out;
}

}} // namespace
