//
// Definitions for schema: http://uk.ac.ed.maths.org
//  file:/home/s0965328/workspace-smartphone/server/wsdl_generator/wsdl/Alm.wsdl#types2
//
//
// Constructor for XML Schema item {http://uk.ac.ed.maths.org}optimizePortfolioMAD
//
function uk_ac_ed_maths_org_optimizePortfolioMAD () {
    this.typeMarker = 'uk_ac_ed_maths_org_optimizePortfolioMAD';
    this._args0 = null;
    this._args1 = null;
    this._args2 = null;
    this._args3 = null;
}

//
// accessor is uk_ac_ed_maths_org_optimizePortfolioMAD.prototype.getArgs0
// element get for args0
// - element type is {http://uk.ac.ed.maths.org/xsd}SymbolSet
// - optional element
// - nillable
//
// element set for args0
// setter function is is uk_ac_ed_maths_org_optimizePortfolioMAD.prototype.setArgs0
//
function uk_ac_ed_maths_org_optimizePortfolioMAD_getArgs0() { return this._args0;}

uk_ac_ed_maths_org_optimizePortfolioMAD.prototype.getArgs0 = uk_ac_ed_maths_org_optimizePortfolioMAD_getArgs0;

function uk_ac_ed_maths_org_optimizePortfolioMAD_setArgs0(value) { this._args0 = value;}

uk_ac_ed_maths_org_optimizePortfolioMAD.prototype.setArgs0 = uk_ac_ed_maths_org_optimizePortfolioMAD_setArgs0;
//
// accessor is uk_ac_ed_maths_org_optimizePortfolioMAD.prototype.getArgs1
// element get for args1
// - element type is {http://www.w3.org/2001/XMLSchema}double
// - optional element
//
// element set for args1
// setter function is is uk_ac_ed_maths_org_optimizePortfolioMAD.prototype.setArgs1
//
function uk_ac_ed_maths_org_optimizePortfolioMAD_getArgs1() { return this._args1;}

uk_ac_ed_maths_org_optimizePortfolioMAD.prototype.getArgs1 = uk_ac_ed_maths_org_optimizePortfolioMAD_getArgs1;

function uk_ac_ed_maths_org_optimizePortfolioMAD_setArgs1(value) { this._args1 = value;}

uk_ac_ed_maths_org_optimizePortfolioMAD.prototype.setArgs1 = uk_ac_ed_maths_org_optimizePortfolioMAD_setArgs1;
//
// accessor is uk_ac_ed_maths_org_optimizePortfolioMAD.prototype.getArgs2
// element get for args2
// - element type is {http://www.w3.org/2001/XMLSchema}date
// - optional element
// - nillable
//
// element set for args2
// setter function is is uk_ac_ed_maths_org_optimizePortfolioMAD.prototype.setArgs2
//
function uk_ac_ed_maths_org_optimizePortfolioMAD_getArgs2() { return this._args2;}

uk_ac_ed_maths_org_optimizePortfolioMAD.prototype.getArgs2 = uk_ac_ed_maths_org_optimizePortfolioMAD_getArgs2;

function uk_ac_ed_maths_org_optimizePortfolioMAD_setArgs2(value) { this._args2 = value;}

uk_ac_ed_maths_org_optimizePortfolioMAD.prototype.setArgs2 = uk_ac_ed_maths_org_optimizePortfolioMAD_setArgs2;
//
// accessor is uk_ac_ed_maths_org_optimizePortfolioMAD.prototype.getArgs3
// element get for args3
// - element type is {http://www.w3.org/2001/XMLSchema}date
// - optional element
// - nillable
//
// element set for args3
// setter function is is uk_ac_ed_maths_org_optimizePortfolioMAD.prototype.setArgs3
//
function uk_ac_ed_maths_org_optimizePortfolioMAD_getArgs3() { return this._args3;}

uk_ac_ed_maths_org_optimizePortfolioMAD.prototype.getArgs3 = uk_ac_ed_maths_org_optimizePortfolioMAD_getArgs3;

function uk_ac_ed_maths_org_optimizePortfolioMAD_setArgs3(value) { this._args3 = value;}

uk_ac_ed_maths_org_optimizePortfolioMAD.prototype.setArgs3 = uk_ac_ed_maths_org_optimizePortfolioMAD_setArgs3;
//
// Serialize {http://uk.ac.ed.maths.org}optimizePortfolioMAD
//
function uk_ac_ed_maths_org_optimizePortfolioMAD_serialize(cxfjsutils, elementName, extraNamespaces) {
    var xml = '';
    if (elementName != null) {
     xml = xml + '<';
     xml = xml + elementName;
     xml = xml + ' ';
     xml = xml + 'xmlns:jns0=\'http://uk.ac.ed.maths.org\' ';
     if (extraNamespaces) {
      xml = xml + ' ' + extraNamespaces;
     }
     xml = xml + '>';
    }
    // block for local variables
    {
     if (this._args0 != null) {
      if (this._args0 == null) {
       xml = xml + '<jns0:args0 xsi:nil=\'true\'/>';
      } else {
       xml = xml + this._args0.serialize(cxfjsutils, 'jns0:args0', null);
      }
     }
    }
    // block for local variables
    {
     if (this._args1 != null) {
      xml = xml + '<jns0:args1>';
      xml = xml + cxfjsutils.escapeXmlEntities(this._args1);
      xml = xml + '</jns0:args1>';
     }
    }
    // block for local variables
    {
     if (this._args2 != null) {
      if (this._args2 == null) {
       xml = xml + '<jns0:args2 xsi:nil=\'true\'/>';
      } else {
       xml = xml + '<jns0:args2>';
       xml = xml + cxfjsutils.escapeXmlEntities(this._args2);
       xml = xml + '</jns0:args2>';
      }
     }
    }
    // block for local variables
    {
     if (this._args3 != null) {
      if (this._args3 == null) {
       xml = xml + '<jns0:args3 xsi:nil=\'true\'/>';
      } else {
       xml = xml + '<jns0:args3>';
       xml = xml + cxfjsutils.escapeXmlEntities(this._args3);
       xml = xml + '</jns0:args3>';
      }
     }
    }
    if (elementName != null) {
     xml = xml + '</';
     xml = xml + elementName;
     xml = xml + '>';
    }
    return xml;
}

uk_ac_ed_maths_org_optimizePortfolioMAD.prototype.serialize = uk_ac_ed_maths_org_optimizePortfolioMAD_serialize;

function uk_ac_ed_maths_org_optimizePortfolioMAD_deserialize (cxfjsutils, element) {
    var newobject = new uk_ac_ed_maths_org_optimizePortfolioMAD();
    cxfjsutils.trace('element: ' + cxfjsutils.traceElementName(element));
    var curElement = cxfjsutils.getFirstElementChild(element);
    var item;
    cxfjsutils.trace('curElement: ' + cxfjsutils.traceElementName(curElement));
    cxfjsutils.trace('processing args0');
    if (curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org', 'args0')) {
     var value = null;
     if (!cxfjsutils.isElementNil(curElement)) {
      item = AX21_SymbolSet_deserialize(cxfjsutils, curElement);
     }
     newobject.setArgs0(item);
     var item = null;
     if (curElement != null) {
      curElement = cxfjsutils.getNextElementSibling(curElement);
     }
    }
    cxfjsutils.trace('curElement: ' + cxfjsutils.traceElementName(curElement));
    cxfjsutils.trace('processing args1');
    if (curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org', 'args1')) {
     var value = null;
     if (!cxfjsutils.isElementNil(curElement)) {
      value = cxfjsutils.getNodeText(curElement);
      item = parseFloat(value);
     }
     newobject.setArgs1(item);
     var item = null;
     if (curElement != null) {
      curElement = cxfjsutils.getNextElementSibling(curElement);
     }
    }
    cxfjsutils.trace('curElement: ' + cxfjsutils.traceElementName(curElement));
    cxfjsutils.trace('processing args2');
    if (curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org', 'args2')) {
     var value = null;
     if (!cxfjsutils.isElementNil(curElement)) {
      value = cxfjsutils.getNodeText(curElement);
      item = value;
     }
     newobject.setArgs2(item);
     var item = null;
     if (curElement != null) {
      curElement = cxfjsutils.getNextElementSibling(curElement);
     }
    }
    cxfjsutils.trace('curElement: ' + cxfjsutils.traceElementName(curElement));
    cxfjsutils.trace('processing args3');
    if (curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org', 'args3')) {
     var value = null;
     if (!cxfjsutils.isElementNil(curElement)) {
      value = cxfjsutils.getNodeText(curElement);
      item = value;
     }
     newobject.setArgs3(item);
     var item = null;
     if (curElement != null) {
      curElement = cxfjsutils.getNextElementSibling(curElement);
     }
    }
    return newobject;
}

//
// Constructor for XML Schema item {http://uk.ac.ed.maths.org}optimizePortfolioSSD
//
function uk_ac_ed_maths_org_optimizePortfolioSSD () {
    this.typeMarker = 'uk_ac_ed_maths_org_optimizePortfolioSSD';
    this._args0 = null;
    this._args1 = null;
    this._args2 = null;
    this._args3 = null;
}

//
// accessor is uk_ac_ed_maths_org_optimizePortfolioSSD.prototype.getArgs0
// element get for args0
// - element type is {http://uk.ac.ed.maths.org/xsd}SymbolSet
// - optional element
// - nillable
//
// element set for args0
// setter function is is uk_ac_ed_maths_org_optimizePortfolioSSD.prototype.setArgs0
//
function uk_ac_ed_maths_org_optimizePortfolioSSD_getArgs0() { return this._args0;}

uk_ac_ed_maths_org_optimizePortfolioSSD.prototype.getArgs0 = uk_ac_ed_maths_org_optimizePortfolioSSD_getArgs0;

function uk_ac_ed_maths_org_optimizePortfolioSSD_setArgs0(value) { this._args0 = value;}

uk_ac_ed_maths_org_optimizePortfolioSSD.prototype.setArgs0 = uk_ac_ed_maths_org_optimizePortfolioSSD_setArgs0;
//
// accessor is uk_ac_ed_maths_org_optimizePortfolioSSD.prototype.getArgs1
// element get for args1
// - element type is {http://www.w3.org/2001/XMLSchema}string
// - optional element
// - nillable
//
// element set for args1
// setter function is is uk_ac_ed_maths_org_optimizePortfolioSSD.prototype.setArgs1
//
function uk_ac_ed_maths_org_optimizePortfolioSSD_getArgs1() { return this._args1;}

uk_ac_ed_maths_org_optimizePortfolioSSD.prototype.getArgs1 = uk_ac_ed_maths_org_optimizePortfolioSSD_getArgs1;

function uk_ac_ed_maths_org_optimizePortfolioSSD_setArgs1(value) { this._args1 = value;}

uk_ac_ed_maths_org_optimizePortfolioSSD.prototype.setArgs1 = uk_ac_ed_maths_org_optimizePortfolioSSD_setArgs1;
//
// accessor is uk_ac_ed_maths_org_optimizePortfolioSSD.prototype.getArgs2
// element get for args2
// - element type is {http://www.w3.org/2001/XMLSchema}date
// - optional element
// - nillable
//
// element set for args2
// setter function is is uk_ac_ed_maths_org_optimizePortfolioSSD.prototype.setArgs2
//
function uk_ac_ed_maths_org_optimizePortfolioSSD_getArgs2() { return this._args2;}

uk_ac_ed_maths_org_optimizePortfolioSSD.prototype.getArgs2 = uk_ac_ed_maths_org_optimizePortfolioSSD_getArgs2;

function uk_ac_ed_maths_org_optimizePortfolioSSD_setArgs2(value) { this._args2 = value;}

uk_ac_ed_maths_org_optimizePortfolioSSD.prototype.setArgs2 = uk_ac_ed_maths_org_optimizePortfolioSSD_setArgs2;
//
// accessor is uk_ac_ed_maths_org_optimizePortfolioSSD.prototype.getArgs3
// element get for args3
// - element type is {http://www.w3.org/2001/XMLSchema}date
// - optional element
// - nillable
//
// element set for args3
// setter function is is uk_ac_ed_maths_org_optimizePortfolioSSD.prototype.setArgs3
//
function uk_ac_ed_maths_org_optimizePortfolioSSD_getArgs3() { return this._args3;}

uk_ac_ed_maths_org_optimizePortfolioSSD.prototype.getArgs3 = uk_ac_ed_maths_org_optimizePortfolioSSD_getArgs3;

function uk_ac_ed_maths_org_optimizePortfolioSSD_setArgs3(value) { this._args3 = value;}

uk_ac_ed_maths_org_optimizePortfolioSSD.prototype.setArgs3 = uk_ac_ed_maths_org_optimizePortfolioSSD_setArgs3;
//
// Serialize {http://uk.ac.ed.maths.org}optimizePortfolioSSD
//
function uk_ac_ed_maths_org_optimizePortfolioSSD_serialize(cxfjsutils, elementName, extraNamespaces) {
    var xml = '';
    if (elementName != null) {
     xml = xml + '<';
     xml = xml + elementName;
     xml = xml + ' ';
     xml = xml + 'xmlns:jns0=\'http://uk.ac.ed.maths.org\' ';
     if (extraNamespaces) {
      xml = xml + ' ' + extraNamespaces;
     }
     xml = xml + '>';
    }
    // block for local variables
    {
     if (this._args0 != null) {
      if (this._args0 == null) {
       xml = xml + '<jns0:args0 xsi:nil=\'true\'/>';
      } else {
       xml = xml + this._args0.serialize(cxfjsutils, 'jns0:args0', null);
      }
     }
    }
    // block for local variables
    {
     if (this._args1 != null) {
      if (this._args1 == null) {
       xml = xml + '<jns0:args1 xsi:nil=\'true\'/>';
      } else {
       xml = xml + '<jns0:args1>';
       xml = xml + cxfjsutils.escapeXmlEntities(this._args1);
       xml = xml + '</jns0:args1>';
      }
     }
    }
    // block for local variables
    {
     if (this._args2 != null) {
      if (this._args2 == null) {
       xml = xml + '<jns0:args2 xsi:nil=\'true\'/>';
      } else {
       xml = xml + '<jns0:args2>';
       xml = xml + cxfjsutils.escapeXmlEntities(this._args2);
       xml = xml + '</jns0:args2>';
      }
     }
    }
    // block for local variables
    {
     if (this._args3 != null) {
      if (this._args3 == null) {
       xml = xml + '<jns0:args3 xsi:nil=\'true\'/>';
      } else {
       xml = xml + '<jns0:args3>';
       xml = xml + cxfjsutils.escapeXmlEntities(this._args3);
       xml = xml + '</jns0:args3>';
      }
     }
    }
    if (elementName != null) {
     xml = xml + '</';
     xml = xml + elementName;
     xml = xml + '>';
    }
    return xml;
}

uk_ac_ed_maths_org_optimizePortfolioSSD.prototype.serialize = uk_ac_ed_maths_org_optimizePortfolioSSD_serialize;

function uk_ac_ed_maths_org_optimizePortfolioSSD_deserialize (cxfjsutils, element) {
    var newobject = new uk_ac_ed_maths_org_optimizePortfolioSSD();
    cxfjsutils.trace('element: ' + cxfjsutils.traceElementName(element));
    var curElement = cxfjsutils.getFirstElementChild(element);
    var item;
    cxfjsutils.trace('curElement: ' + cxfjsutils.traceElementName(curElement));
    cxfjsutils.trace('processing args0');
    if (curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org', 'args0')) {
     var value = null;
     if (!cxfjsutils.isElementNil(curElement)) {
      item = AX21_SymbolSet_deserialize(cxfjsutils, curElement);
     }
     newobject.setArgs0(item);
     var item = null;
     if (curElement != null) {
      curElement = cxfjsutils.getNextElementSibling(curElement);
     }
    }
    cxfjsutils.trace('curElement: ' + cxfjsutils.traceElementName(curElement));
    cxfjsutils.trace('processing args1');
    if (curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org', 'args1')) {
     var value = null;
     if (!cxfjsutils.isElementNil(curElement)) {
      value = cxfjsutils.getNodeText(curElement);
      item = value;
     }
     newobject.setArgs1(item);
     var item = null;
     if (curElement != null) {
      curElement = cxfjsutils.getNextElementSibling(curElement);
     }
    }
    cxfjsutils.trace('curElement: ' + cxfjsutils.traceElementName(curElement));
    cxfjsutils.trace('processing args2');
    if (curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org', 'args2')) {
     var value = null;
     if (!cxfjsutils.isElementNil(curElement)) {
      value = cxfjsutils.getNodeText(curElement);
      item = value;
     }
     newobject.setArgs2(item);
     var item = null;
     if (curElement != null) {
      curElement = cxfjsutils.getNextElementSibling(curElement);
     }
    }
    cxfjsutils.trace('curElement: ' + cxfjsutils.traceElementName(curElement));
    cxfjsutils.trace('processing args3');
    if (curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org', 'args3')) {
     var value = null;
     if (!cxfjsutils.isElementNil(curElement)) {
      value = cxfjsutils.getNodeText(curElement);
      item = value;
     }
     newobject.setArgs3(item);
     var item = null;
     if (curElement != null) {
      curElement = cxfjsutils.getNextElementSibling(curElement);
     }
    }
    return newobject;
}

//
// Constructor for XML Schema item {http://uk.ac.ed.maths.org}optimizePortfolioSSDResponse
//
function uk_ac_ed_maths_org_optimizePortfolioSSDResponse () {
    this.typeMarker = 'uk_ac_ed_maths_org_optimizePortfolioSSDResponse';
    this._return = null;
}

//
// accessor is uk_ac_ed_maths_org_optimizePortfolioSSDResponse.prototype.getReturn
// element get for return
// - element type is {http://uk.ac.ed.maths.org/xsd}OptimizePortfolioSSDReturn
// - optional element
// - nillable
//
// element set for return
// setter function is is uk_ac_ed_maths_org_optimizePortfolioSSDResponse.prototype.setReturn
//
function uk_ac_ed_maths_org_optimizePortfolioSSDResponse_getReturn() { return this._return;}

uk_ac_ed_maths_org_optimizePortfolioSSDResponse.prototype.getReturn = uk_ac_ed_maths_org_optimizePortfolioSSDResponse_getReturn;

function uk_ac_ed_maths_org_optimizePortfolioSSDResponse_setReturn(value) { this._return = value;}

uk_ac_ed_maths_org_optimizePortfolioSSDResponse.prototype.setReturn = uk_ac_ed_maths_org_optimizePortfolioSSDResponse_setReturn;
//
// Serialize {http://uk.ac.ed.maths.org}optimizePortfolioSSDResponse
//
function uk_ac_ed_maths_org_optimizePortfolioSSDResponse_serialize(cxfjsutils, elementName, extraNamespaces) {
    var xml = '';
    if (elementName != null) {
     xml = xml + '<';
     xml = xml + elementName;
     xml = xml + ' ';
     xml = xml + 'xmlns:jns0=\'http://uk.ac.ed.maths.org\' ';
     if (extraNamespaces) {
      xml = xml + ' ' + extraNamespaces;
     }
     xml = xml + '>';
    }
    // block for local variables
    {
     if (this._return != null) {
      if (this._return == null) {
       xml = xml + '<jns0:return xsi:nil=\'true\'/>';
      } else {
       xml = xml + this._return.serialize(cxfjsutils, 'jns0:return', null);
      }
     }
    }
    if (elementName != null) {
     xml = xml + '</';
     xml = xml + elementName;
     xml = xml + '>';
    }
    return xml;
}

uk_ac_ed_maths_org_optimizePortfolioSSDResponse.prototype.serialize = uk_ac_ed_maths_org_optimizePortfolioSSDResponse_serialize;

function uk_ac_ed_maths_org_optimizePortfolioSSDResponse_deserialize (cxfjsutils, element) {
    var newobject = new uk_ac_ed_maths_org_optimizePortfolioSSDResponse();
    cxfjsutils.trace('element: ' + cxfjsutils.traceElementName(element));
    var curElement = cxfjsutils.getFirstElementChild(element);
    var item;
    cxfjsutils.trace('curElement: ' + cxfjsutils.traceElementName(curElement));
    cxfjsutils.trace('processing return');
    if (curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org', 'return')) {
     var value = null;
     if (!cxfjsutils.isElementNil(curElement)) {
      item = AX21_OptimizePortfolioSSDReturn_deserialize(cxfjsutils, curElement);
     }
     newobject.setReturn(item);
     var item = null;
     if (curElement != null) {
      curElement = cxfjsutils.getNextElementSibling(curElement);
     }
    }
    return newobject;
}

//
// Constructor for XML Schema item {http://uk.ac.ed.maths.org}optimizePortfolioMADResponse
//
function uk_ac_ed_maths_org_optimizePortfolioMADResponse () {
    this.typeMarker = 'uk_ac_ed_maths_org_optimizePortfolioMADResponse';
    this._return = null;
}

//
// accessor is uk_ac_ed_maths_org_optimizePortfolioMADResponse.prototype.getReturn
// element get for return
// - element type is {http://uk.ac.ed.maths.org/xsd}OptimizePortfolioMADReturn
// - optional element
// - nillable
//
// element set for return
// setter function is is uk_ac_ed_maths_org_optimizePortfolioMADResponse.prototype.setReturn
//
function uk_ac_ed_maths_org_optimizePortfolioMADResponse_getReturn() { return this._return;}

uk_ac_ed_maths_org_optimizePortfolioMADResponse.prototype.getReturn = uk_ac_ed_maths_org_optimizePortfolioMADResponse_getReturn;

function uk_ac_ed_maths_org_optimizePortfolioMADResponse_setReturn(value) { this._return = value;}

uk_ac_ed_maths_org_optimizePortfolioMADResponse.prototype.setReturn = uk_ac_ed_maths_org_optimizePortfolioMADResponse_setReturn;
//
// Serialize {http://uk.ac.ed.maths.org}optimizePortfolioMADResponse
//
function uk_ac_ed_maths_org_optimizePortfolioMADResponse_serialize(cxfjsutils, elementName, extraNamespaces) {
    var xml = '';
    if (elementName != null) {
     xml = xml + '<';
     xml = xml + elementName;
     xml = xml + ' ';
     xml = xml + 'xmlns:jns0=\'http://uk.ac.ed.maths.org\' ';
     if (extraNamespaces) {
      xml = xml + ' ' + extraNamespaces;
     }
     xml = xml + '>';
    }
    // block for local variables
    {
     if (this._return != null) {
      if (this._return == null) {
       xml = xml + '<jns0:return xsi:nil=\'true\'/>';
      } else {
       xml = xml + this._return.serialize(cxfjsutils, 'jns0:return', null);
      }
     }
    }
    if (elementName != null) {
     xml = xml + '</';
     xml = xml + elementName;
     xml = xml + '>';
    }
    return xml;
}

uk_ac_ed_maths_org_optimizePortfolioMADResponse.prototype.serialize = uk_ac_ed_maths_org_optimizePortfolioMADResponse_serialize;

function uk_ac_ed_maths_org_optimizePortfolioMADResponse_deserialize (cxfjsutils, element) {
    var newobject = new uk_ac_ed_maths_org_optimizePortfolioMADResponse();
    cxfjsutils.trace('element: ' + cxfjsutils.traceElementName(element));
    var curElement = cxfjsutils.getFirstElementChild(element);
    var item;
    cxfjsutils.trace('curElement: ' + cxfjsutils.traceElementName(curElement));
    cxfjsutils.trace('processing return');
    if (curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org', 'return')) {
     var value = null;
     if (!cxfjsutils.isElementNil(curElement)) {
      item = AX21_OptimizePortfolioMADReturn_deserialize(cxfjsutils, curElement);
     }
     newobject.setReturn(item);
     var item = null;
     if (curElement != null) {
      curElement = cxfjsutils.getNextElementSibling(curElement);
     }
    }
    return newobject;
}

//
// Definitions for schema: http://uk.ac.ed.maths.org/xsd
//  file:/home/s0965328/workspace-smartphone/server/wsdl_generator/wsdl/Alm.wsdl#types1
//
//
// Constructor for XML Schema item {http://uk.ac.ed.maths.org/xsd}OptimizePortfolioMADReturn
//
function AX21_OptimizePortfolioMADReturn () {
    this.typeMarker = 'AX21_OptimizePortfolioMADReturn';
    this._expReturn = null;
    this._portfolioRatio = [];
    this._protfolioRatio = [];
    this._resultCode = null;
}

//
// accessor is AX21_OptimizePortfolioMADReturn.prototype.getExpReturn
// element get for expReturn
// - element type is {http://www.w3.org/2001/XMLSchema}double
// - optional element
//
// element set for expReturn
// setter function is is AX21_OptimizePortfolioMADReturn.prototype.setExpReturn
//
function AX21_OptimizePortfolioMADReturn_getExpReturn() { return this._expReturn;}

AX21_OptimizePortfolioMADReturn.prototype.getExpReturn = AX21_OptimizePortfolioMADReturn_getExpReturn;

function AX21_OptimizePortfolioMADReturn_setExpReturn(value) { this._expReturn = value;}

AX21_OptimizePortfolioMADReturn.prototype.setExpReturn = AX21_OptimizePortfolioMADReturn_setExpReturn;
//
// accessor is AX21_OptimizePortfolioMADReturn.prototype.getPortfolioRatio
// element get for portfolioRatio
// - element type is {http://www.w3.org/2001/XMLSchema}double
// - required element
// - array
// - nillable
//
// element set for portfolioRatio
// setter function is is AX21_OptimizePortfolioMADReturn.prototype.setPortfolioRatio
//
function AX21_OptimizePortfolioMADReturn_getPortfolioRatio() { return this._portfolioRatio;}

AX21_OptimizePortfolioMADReturn.prototype.getPortfolioRatio = AX21_OptimizePortfolioMADReturn_getPortfolioRatio;

function AX21_OptimizePortfolioMADReturn_setPortfolioRatio(value) { this._portfolioRatio = value;}

AX21_OptimizePortfolioMADReturn.prototype.setPortfolioRatio = AX21_OptimizePortfolioMADReturn_setPortfolioRatio;
//
// accessor is AX21_OptimizePortfolioMADReturn.prototype.getProtfolioRatio
// element get for protfolioRatio
// - element type is {http://www.w3.org/2001/XMLSchema}double
// - required element
// - array
// - nillable
//
// element set for protfolioRatio
// setter function is is AX21_OptimizePortfolioMADReturn.prototype.setProtfolioRatio
//
function AX21_OptimizePortfolioMADReturn_getProtfolioRatio() { return this._protfolioRatio;}

AX21_OptimizePortfolioMADReturn.prototype.getProtfolioRatio = AX21_OptimizePortfolioMADReturn_getProtfolioRatio;

function AX21_OptimizePortfolioMADReturn_setProtfolioRatio(value) { this._protfolioRatio = value;}

AX21_OptimizePortfolioMADReturn.prototype.setProtfolioRatio = AX21_OptimizePortfolioMADReturn_setProtfolioRatio;
//
// accessor is AX21_OptimizePortfolioMADReturn.prototype.getResultCode
// element get for resultCode
// - element type is {http://www.w3.org/2001/XMLSchema}int
// - optional element
//
// element set for resultCode
// setter function is is AX21_OptimizePortfolioMADReturn.prototype.setResultCode
//
function AX21_OptimizePortfolioMADReturn_getResultCode() { return this._resultCode;}

AX21_OptimizePortfolioMADReturn.prototype.getResultCode = AX21_OptimizePortfolioMADReturn_getResultCode;

function AX21_OptimizePortfolioMADReturn_setResultCode(value) { this._resultCode = value;}

AX21_OptimizePortfolioMADReturn.prototype.setResultCode = AX21_OptimizePortfolioMADReturn_setResultCode;
//
// Serialize {http://uk.ac.ed.maths.org/xsd}OptimizePortfolioMADReturn
//
function AX21_OptimizePortfolioMADReturn_serialize(cxfjsutils, elementName, extraNamespaces) {
    var xml = '';
    if (elementName != null) {
     xml = xml + '<';
     xml = xml + elementName;
     xml = xml + ' ';
     xml = xml + 'xmlns:jns0=\'http://uk.ac.ed.maths.org\' xmlns:jns1=\'http://uk.ac.ed.maths.org/xsd\' ';
     if (extraNamespaces) {
      xml = xml + ' ' + extraNamespaces;
     }
     xml = xml + '>';
    }
    // block for local variables
    {
     if (this._expReturn != null) {
      xml = xml + '<jns1:expReturn>';
      xml = xml + cxfjsutils.escapeXmlEntities(this._expReturn);
      xml = xml + '</jns1:expReturn>';
     }
    }
    // block for local variables
    {
     if (this._portfolioRatio != null) {
      for (var ax = 0;ax < this._portfolioRatio.length;ax ++) {
       if (this._portfolioRatio[ax] == null) {
        xml = xml + '<jns1:portfolioRatio xsi:nil=\'true\'/>';
       } else {
        xml = xml + '<jns1:portfolioRatio>';
        xml = xml + cxfjsutils.escapeXmlEntities(this._portfolioRatio[ax]);
        xml = xml + '</jns1:portfolioRatio>';
       }
      }
     }
    }
    // block for local variables
    {
     if (this._protfolioRatio != null) {
      for (var ax = 0;ax < this._protfolioRatio.length;ax ++) {
       if (this._protfolioRatio[ax] == null) {
        xml = xml + '<jns1:protfolioRatio xsi:nil=\'true\'/>';
       } else {
        xml = xml + '<jns1:protfolioRatio>';
        xml = xml + cxfjsutils.escapeXmlEntities(this._protfolioRatio[ax]);
        xml = xml + '</jns1:protfolioRatio>';
       }
      }
     }
    }
    // block for local variables
    {
     if (this._resultCode != null) {
      xml = xml + '<jns1:resultCode>';
      xml = xml + cxfjsutils.escapeXmlEntities(this._resultCode);
      xml = xml + '</jns1:resultCode>';
     }
    }
    if (elementName != null) {
     xml = xml + '</';
     xml = xml + elementName;
     xml = xml + '>';
    }
    return xml;
}

AX21_OptimizePortfolioMADReturn.prototype.serialize = AX21_OptimizePortfolioMADReturn_serialize;

function AX21_OptimizePortfolioMADReturn_deserialize (cxfjsutils, element) {
    var newobject = new AX21_OptimizePortfolioMADReturn();
    cxfjsutils.trace('element: ' + cxfjsutils.traceElementName(element));
    var curElement = cxfjsutils.getFirstElementChild(element);
    var item;
    cxfjsutils.trace('curElement: ' + cxfjsutils.traceElementName(curElement));
    cxfjsutils.trace('processing expReturn');
    if (curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org/xsd', 'expReturn')) {
     var value = null;
     if (!cxfjsutils.isElementNil(curElement)) {
      value = cxfjsutils.getNodeText(curElement);
      item = parseFloat(value);
     }
     newobject.setExpReturn(item);
     var item = null;
     if (curElement != null) {
      curElement = cxfjsutils.getNextElementSibling(curElement);
     }
    }
    cxfjsutils.trace('curElement: ' + cxfjsutils.traceElementName(curElement));
    cxfjsutils.trace('processing portfolioRatio');
    if (curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org/xsd', 'portfolioRatio')) {
     item = [];
     do  {
      var arrayItem;
      var value = null;
      if (!cxfjsutils.isElementNil(curElement)) {
       value = cxfjsutils.getNodeText(curElement);
       arrayItem = parseFloat(value);
      }
      item.push(arrayItem);
      curElement = cxfjsutils.getNextElementSibling(curElement);
     }
       while(curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org/xsd', 'portfolioRatio'));
     newobject.setPortfolioRatio(item);
     var item = null;
    }
    cxfjsutils.trace('curElement: ' + cxfjsutils.traceElementName(curElement));
    cxfjsutils.trace('processing protfolioRatio');
    if (curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org/xsd', 'protfolioRatio')) {
     item = [];
     do  {
      var arrayItem;
      var value = null;
      if (!cxfjsutils.isElementNil(curElement)) {
       value = cxfjsutils.getNodeText(curElement);
       arrayItem = parseFloat(value);
      }
      item.push(arrayItem);
      curElement = cxfjsutils.getNextElementSibling(curElement);
     }
       while(curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org/xsd', 'protfolioRatio'));
     newobject.setProtfolioRatio(item);
     var item = null;
    }
    cxfjsutils.trace('curElement: ' + cxfjsutils.traceElementName(curElement));
    cxfjsutils.trace('processing resultCode');
    if (curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org/xsd', 'resultCode')) {
     var value = null;
     if (!cxfjsutils.isElementNil(curElement)) {
      value = cxfjsutils.getNodeText(curElement);
      item = parseInt(value);
     }
     newobject.setResultCode(item);
     var item = null;
     if (curElement != null) {
      curElement = cxfjsutils.getNextElementSibling(curElement);
     }
    }
    return newobject;
}

//
// Constructor for XML Schema item {http://uk.ac.ed.maths.org/xsd}SymbolSet
//
function AX21_SymbolSet () {
    this.typeMarker = 'AX21_SymbolSet';
    this._symbols = [];
}

//
// accessor is AX21_SymbolSet.prototype.getSymbols
// element get for symbols
// - element type is {http://www.w3.org/2001/XMLSchema}string
// - required element
// - array
// - nillable
//
// element set for symbols
// setter function is is AX21_SymbolSet.prototype.setSymbols
//
function AX21_SymbolSet_getSymbols() { return this._symbols;}

AX21_SymbolSet.prototype.getSymbols = AX21_SymbolSet_getSymbols;

function AX21_SymbolSet_setSymbols(value) { this._symbols = value;}

AX21_SymbolSet.prototype.setSymbols = AX21_SymbolSet_setSymbols;
//
// Serialize {http://uk.ac.ed.maths.org/xsd}SymbolSet
//
function AX21_SymbolSet_serialize(cxfjsutils, elementName, extraNamespaces) {
    var xml = '';
    if (elementName != null) {
     xml = xml + '<';
     xml = xml + elementName;
     xml = xml + ' ';
     xml = xml + 'xmlns:jns0=\'http://uk.ac.ed.maths.org\' xmlns:jns1=\'http://uk.ac.ed.maths.org/xsd\' ';
     if (extraNamespaces) {
      xml = xml + ' ' + extraNamespaces;
     }
     xml = xml + '>';
    }
    // block for local variables
    {
     if (this._symbols != null) {
      for (var ax = 0;ax < this._symbols.length;ax ++) {
       if (this._symbols[ax] == null) {
        xml = xml + '<jns1:symbols xsi:nil=\'true\'/>';
       } else {
        xml = xml + '<jns1:symbols>';
        xml = xml + cxfjsutils.escapeXmlEntities(this._symbols[ax]);
        xml = xml + '</jns1:symbols>';
       }
      }
     }
    }
    if (elementName != null) {
     xml = xml + '</';
     xml = xml + elementName;
     xml = xml + '>';
    }
    return xml;
}

AX21_SymbolSet.prototype.serialize = AX21_SymbolSet_serialize;

function AX21_SymbolSet_deserialize (cxfjsutils, element) {
    var newobject = new AX21_SymbolSet();
    cxfjsutils.trace('element: ' + cxfjsutils.traceElementName(element));
    var curElement = cxfjsutils.getFirstElementChild(element);
    var item;
    cxfjsutils.trace('curElement: ' + cxfjsutils.traceElementName(curElement));
    cxfjsutils.trace('processing symbols');
    if (curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org/xsd', 'symbols')) {
     item = [];
     do  {
      var arrayItem;
      var value = null;
      if (!cxfjsutils.isElementNil(curElement)) {
       value = cxfjsutils.getNodeText(curElement);
       arrayItem = value;
      }
      item.push(arrayItem);
      curElement = cxfjsutils.getNextElementSibling(curElement);
     }
       while(curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org/xsd', 'symbols'));
     newobject.setSymbols(item);
     var item = null;
    }
    return newobject;
}

//
// Constructor for XML Schema item {http://uk.ac.ed.maths.org/xsd}OptimizePortfolioSSDReturn
//
function AX21_OptimizePortfolioSSDReturn () {
    this.typeMarker = 'AX21_OptimizePortfolioSSDReturn';
    this._expReturn = null;
    this._portfolioRatio = [];
    this._protfolioRatio = [];
    this._resultCode = null;
}

//
// accessor is AX21_OptimizePortfolioSSDReturn.prototype.getExpReturn
// element get for expReturn
// - element type is {http://www.w3.org/2001/XMLSchema}double
// - optional element
//
// element set for expReturn
// setter function is is AX21_OptimizePortfolioSSDReturn.prototype.setExpReturn
//
function AX21_OptimizePortfolioSSDReturn_getExpReturn() { return this._expReturn;}

AX21_OptimizePortfolioSSDReturn.prototype.getExpReturn = AX21_OptimizePortfolioSSDReturn_getExpReturn;

function AX21_OptimizePortfolioSSDReturn_setExpReturn(value) { this._expReturn = value;}

AX21_OptimizePortfolioSSDReturn.prototype.setExpReturn = AX21_OptimizePortfolioSSDReturn_setExpReturn;
//
// accessor is AX21_OptimizePortfolioSSDReturn.prototype.getPortfolioRatio
// element get for portfolioRatio
// - element type is {http://www.w3.org/2001/XMLSchema}double
// - required element
// - array
// - nillable
//
// element set for portfolioRatio
// setter function is is AX21_OptimizePortfolioSSDReturn.prototype.setPortfolioRatio
//
function AX21_OptimizePortfolioSSDReturn_getPortfolioRatio() { return this._portfolioRatio;}

AX21_OptimizePortfolioSSDReturn.prototype.getPortfolioRatio = AX21_OptimizePortfolioSSDReturn_getPortfolioRatio;

function AX21_OptimizePortfolioSSDReturn_setPortfolioRatio(value) { this._portfolioRatio = value;}

AX21_OptimizePortfolioSSDReturn.prototype.setPortfolioRatio = AX21_OptimizePortfolioSSDReturn_setPortfolioRatio;
//
// accessor is AX21_OptimizePortfolioSSDReturn.prototype.getProtfolioRatio
// element get for protfolioRatio
// - element type is {http://www.w3.org/2001/XMLSchema}double
// - required element
// - array
// - nillable
//
// element set for protfolioRatio
// setter function is is AX21_OptimizePortfolioSSDReturn.prototype.setProtfolioRatio
//
function AX21_OptimizePortfolioSSDReturn_getProtfolioRatio() { return this._protfolioRatio;}

AX21_OptimizePortfolioSSDReturn.prototype.getProtfolioRatio = AX21_OptimizePortfolioSSDReturn_getProtfolioRatio;

function AX21_OptimizePortfolioSSDReturn_setProtfolioRatio(value) { this._protfolioRatio = value;}

AX21_OptimizePortfolioSSDReturn.prototype.setProtfolioRatio = AX21_OptimizePortfolioSSDReturn_setProtfolioRatio;
//
// accessor is AX21_OptimizePortfolioSSDReturn.prototype.getResultCode
// element get for resultCode
// - element type is {http://www.w3.org/2001/XMLSchema}int
// - optional element
//
// element set for resultCode
// setter function is is AX21_OptimizePortfolioSSDReturn.prototype.setResultCode
//
function AX21_OptimizePortfolioSSDReturn_getResultCode() { return this._resultCode;}

AX21_OptimizePortfolioSSDReturn.prototype.getResultCode = AX21_OptimizePortfolioSSDReturn_getResultCode;

function AX21_OptimizePortfolioSSDReturn_setResultCode(value) { this._resultCode = value;}

AX21_OptimizePortfolioSSDReturn.prototype.setResultCode = AX21_OptimizePortfolioSSDReturn_setResultCode;
//
// Serialize {http://uk.ac.ed.maths.org/xsd}OptimizePortfolioSSDReturn
//
function AX21_OptimizePortfolioSSDReturn_serialize(cxfjsutils, elementName, extraNamespaces) {
    var xml = '';
    if (elementName != null) {
     xml = xml + '<';
     xml = xml + elementName;
     xml = xml + ' ';
     xml = xml + 'xmlns:jns0=\'http://uk.ac.ed.maths.org\' xmlns:jns1=\'http://uk.ac.ed.maths.org/xsd\' ';
     if (extraNamespaces) {
      xml = xml + ' ' + extraNamespaces;
     }
     xml = xml + '>';
    }
    // block for local variables
    {
     if (this._expReturn != null) {
      xml = xml + '<jns1:expReturn>';
      xml = xml + cxfjsutils.escapeXmlEntities(this._expReturn);
      xml = xml + '</jns1:expReturn>';
     }
    }
    // block for local variables
    {
     if (this._portfolioRatio != null) {
      for (var ax = 0;ax < this._portfolioRatio.length;ax ++) {
       if (this._portfolioRatio[ax] == null) {
        xml = xml + '<jns1:portfolioRatio xsi:nil=\'true\'/>';
       } else {
        xml = xml + '<jns1:portfolioRatio>';
        xml = xml + cxfjsutils.escapeXmlEntities(this._portfolioRatio[ax]);
        xml = xml + '</jns1:portfolioRatio>';
       }
      }
     }
    }
    // block for local variables
    {
     if (this._protfolioRatio != null) {
      for (var ax = 0;ax < this._protfolioRatio.length;ax ++) {
       if (this._protfolioRatio[ax] == null) {
        xml = xml + '<jns1:protfolioRatio xsi:nil=\'true\'/>';
       } else {
        xml = xml + '<jns1:protfolioRatio>';
        xml = xml + cxfjsutils.escapeXmlEntities(this._protfolioRatio[ax]);
        xml = xml + '</jns1:protfolioRatio>';
       }
      }
     }
    }
    // block for local variables
    {
     if (this._resultCode != null) {
      xml = xml + '<jns1:resultCode>';
      xml = xml + cxfjsutils.escapeXmlEntities(this._resultCode);
      xml = xml + '</jns1:resultCode>';
     }
    }
    if (elementName != null) {
     xml = xml + '</';
     xml = xml + elementName;
     xml = xml + '>';
    }
    return xml;
}

AX21_OptimizePortfolioSSDReturn.prototype.serialize = AX21_OptimizePortfolioSSDReturn_serialize;

function AX21_OptimizePortfolioSSDReturn_deserialize (cxfjsutils, element) {
    var newobject = new AX21_OptimizePortfolioSSDReturn();
    cxfjsutils.trace('element: ' + cxfjsutils.traceElementName(element));
    var curElement = cxfjsutils.getFirstElementChild(element);
    var item;
    cxfjsutils.trace('curElement: ' + cxfjsutils.traceElementName(curElement));
    cxfjsutils.trace('processing expReturn');
    if (curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org/xsd', 'expReturn')) {
     var value = null;
     if (!cxfjsutils.isElementNil(curElement)) {
      value = cxfjsutils.getNodeText(curElement);
      item = parseFloat(value);
     }
     newobject.setExpReturn(item);
     var item = null;
     if (curElement != null) {
      curElement = cxfjsutils.getNextElementSibling(curElement);
     }
    }
    cxfjsutils.trace('curElement: ' + cxfjsutils.traceElementName(curElement));
    cxfjsutils.trace('processing portfolioRatio');
    if (curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org/xsd', 'portfolioRatio')) {
     item = [];
     do  {
      var arrayItem;
      var value = null;
      if (!cxfjsutils.isElementNil(curElement)) {
       value = cxfjsutils.getNodeText(curElement);
       arrayItem = parseFloat(value);
      }
      item.push(arrayItem);
      curElement = cxfjsutils.getNextElementSibling(curElement);
     }
       while(curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org/xsd', 'portfolioRatio'));
     newobject.setPortfolioRatio(item);
     var item = null;
    }
    cxfjsutils.trace('curElement: ' + cxfjsutils.traceElementName(curElement));
    cxfjsutils.trace('processing protfolioRatio');
    if (curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org/xsd', 'protfolioRatio')) {
     item = [];
     do  {
      var arrayItem;
      var value = null;
      if (!cxfjsutils.isElementNil(curElement)) {
       value = cxfjsutils.getNodeText(curElement);
       arrayItem = parseFloat(value);
      }
      item.push(arrayItem);
      curElement = cxfjsutils.getNextElementSibling(curElement);
     }
       while(curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org/xsd', 'protfolioRatio'));
     newobject.setProtfolioRatio(item);
     var item = null;
    }
    cxfjsutils.trace('curElement: ' + cxfjsutils.traceElementName(curElement));
    cxfjsutils.trace('processing resultCode');
    if (curElement != null && cxfjsutils.isNodeNamedNS(curElement, 'http://uk.ac.ed.maths.org/xsd', 'resultCode')) {
     var value = null;
     if (!cxfjsutils.isElementNil(curElement)) {
      value = cxfjsutils.getNodeText(curElement);
      item = parseInt(value);
     }
     newobject.setResultCode(item);
     var item = null;
     if (curElement != null) {
      curElement = cxfjsutils.getNextElementSibling(curElement);
     }
    }
    return newobject;
}

//
// Definitions for service: {http://uk.ac.ed.maths.org}Alm
//

// Javascript for {http://uk.ac.ed.maths.org}AlmPortType

function uk_ac_ed_maths_org_AlmPortType () {
    this.jsutils = new CxfApacheOrgUtil();
    this.jsutils.interfaceObject = this;
    this.synchronous = false;
    this.url = null;
    this.client = null;
    this.response = null;
    this.globalElementSerializers = [];
    this.globalElementDeserializers = [];
    this.globalElementSerializers['{http://uk.ac.ed.maths.org}optimizePortfolioMAD'] = uk_ac_ed_maths_org_optimizePortfolioMAD_serialize;
    this.globalElementDeserializers['{http://uk.ac.ed.maths.org}optimizePortfolioMAD'] = uk_ac_ed_maths_org_optimizePortfolioMAD_deserialize;
    this.globalElementSerializers['{http://uk.ac.ed.maths.org}optimizePortfolioSSD'] = uk_ac_ed_maths_org_optimizePortfolioSSD_serialize;
    this.globalElementDeserializers['{http://uk.ac.ed.maths.org}optimizePortfolioSSD'] = uk_ac_ed_maths_org_optimizePortfolioSSD_deserialize;
    this.globalElementSerializers['{http://uk.ac.ed.maths.org}optimizePortfolioSSDResponse'] = uk_ac_ed_maths_org_optimizePortfolioSSDResponse_serialize;
    this.globalElementDeserializers['{http://uk.ac.ed.maths.org}optimizePortfolioSSDResponse'] = uk_ac_ed_maths_org_optimizePortfolioSSDResponse_deserialize;
    this.globalElementSerializers['{http://uk.ac.ed.maths.org}optimizePortfolioMADResponse'] = uk_ac_ed_maths_org_optimizePortfolioMADResponse_serialize;
    this.globalElementDeserializers['{http://uk.ac.ed.maths.org}optimizePortfolioMADResponse'] = uk_ac_ed_maths_org_optimizePortfolioMADResponse_deserialize;
    this.globalElementSerializers['{http://uk.ac.ed.maths.org/xsd}OptimizePortfolioMADReturn'] = AX21_OptimizePortfolioMADReturn_serialize;
    this.globalElementDeserializers['{http://uk.ac.ed.maths.org/xsd}OptimizePortfolioMADReturn'] = AX21_OptimizePortfolioMADReturn_deserialize;
    this.globalElementSerializers['{http://uk.ac.ed.maths.org/xsd}SymbolSet'] = AX21_SymbolSet_serialize;
    this.globalElementDeserializers['{http://uk.ac.ed.maths.org/xsd}SymbolSet'] = AX21_SymbolSet_deserialize;
    this.globalElementSerializers['{http://uk.ac.ed.maths.org/xsd}OptimizePortfolioSSDReturn'] = AX21_OptimizePortfolioSSDReturn_serialize;
    this.globalElementDeserializers['{http://uk.ac.ed.maths.org/xsd}OptimizePortfolioSSDReturn'] = AX21_OptimizePortfolioSSDReturn_deserialize;
}

function uk_ac_ed_maths_org_optimizePortfolioSSD_op_onsuccess(client, responseXml) {
    if (client.user_onsuccess) {
     var responseObject = null;
     var element = responseXml.documentElement;
     this.jsutils.trace('responseXml: ' + this.jsutils.traceElementName(element));
     element = this.jsutils.getFirstElementChild(element);
     this.jsutils.trace('first element child: ' + this.jsutils.traceElementName(element));
     while (!this.jsutils.isNodeNamedNS(element, 'http://schemas.xmlsoap.org/soap/envelope/', 'Body')) {
      element = this.jsutils.getNextElementSibling(element);
      if (element == null) {
       throw 'No env:Body in message.'
      }
     }
     element = this.jsutils.getFirstElementChild(element);
     this.jsutils.trace('part element: ' + this.jsutils.traceElementName(element));
     this.jsutils.trace('calling uk_ac_ed_maths_org_optimizePortfolioSSDResponse_deserializeResponse');
     responseObject = uk_ac_ed_maths_org_optimizePortfolioSSDResponse_deserializeResponse(this.jsutils, element);
     client.user_onsuccess(responseObject);
    }
}

uk_ac_ed_maths_org_AlmPortType.prototype.optimizePortfolioSSD_onsuccess = uk_ac_ed_maths_org_optimizePortfolioSSD_op_onsuccess;

function uk_ac_ed_maths_org_optimizePortfolioSSD_op_onerror(client) {
    if (client.user_onerror) {
     var httpStatus;
     var httpStatusText;
     try {
      httpStatus = client.req.status;
      httpStatusText = client.req.statusText;
     } catch(e) {
      httpStatus = -1;
      httpStatusText = 'Error opening connection to server';
     }
     client.user_onerror(httpStatus, httpStatusText);
    }
}

uk_ac_ed_maths_org_AlmPortType.prototype.optimizePortfolioSSD_onerror = uk_ac_ed_maths_org_optimizePortfolioSSD_op_onerror;

//
// Operation {http://uk.ac.ed.maths.org}optimizePortfolioSSD
// Wrapped operation.
// parameter args0
// - Object constructor is AX21_SymbolSet
// parameter args1
// - simple type {http://www.w3.org/2001/XMLSchema}string// parameter args2
// - simple type {http://www.w3.org/2001/XMLSchema}date// parameter args3
// - simple type {http://www.w3.org/2001/XMLSchema}date//
function uk_ac_ed_maths_org_optimizePortfolioSSD_op(successCallback, errorCallback, args0, args1, args2, args3) {
    this.client = new CxfApacheOrgClient(this.jsutils);
    var xml = null;
    var args = new Array(4);
    args[0] = args0;
    args[1] = args1;
    args[2] = args2;
    args[3] = args3;
    xml = this.optimizePortfolioSSDRequest_serializeInput(this.jsutils, args);
    this.client.user_onsuccess = successCallback;
    this.client.user_onerror = errorCallback;
    var closureThis = this;
    this.client.onsuccess = function(client, responseXml) { closureThis.optimizePortfolioSSD_onsuccess(client, responseXml); };
    this.client.onerror = function(client) { closureThis.optimizePortfolioSSD_onerror(client); };
    var requestHeaders = [];
    requestHeaders['SOAPAction'] = 'urn:optimizePortfolioSSD';
    this.jsutils.trace('synchronous = ' + this.synchronous);
    this.client.request(this.url, xml, null, this.synchronous, requestHeaders);
}

uk_ac_ed_maths_org_AlmPortType.prototype.optimizePortfolioSSD = uk_ac_ed_maths_org_optimizePortfolioSSD_op;

function uk_ac_ed_maths_org_optimizePortfolioSSDRequest_serializeInput(cxfjsutils, args) {
    var wrapperObj = new uk_ac_ed_maths_org_optimizePortfolioSSD();
    wrapperObj.setArgs0(args[0]);
    wrapperObj.setArgs1(args[1]);
    wrapperObj.setArgs2(args[2]);
    wrapperObj.setArgs3(args[3]);
    var xml;
    xml = cxfjsutils.beginSoap11Message("xmlns:jns0='http://uk.ac.ed.maths.org' xmlns:jns1='http://uk.ac.ed.maths.org/xsd' ");
    // block for local variables
    {
     xml = xml + wrapperObj.serialize(cxfjsutils, 'jns0:optimizePortfolioSSD', null);
    }
    xml = xml + cxfjsutils.endSoap11Message();
    return xml;
}

uk_ac_ed_maths_org_AlmPortType.prototype.optimizePortfolioSSDRequest_serializeInput = uk_ac_ed_maths_org_optimizePortfolioSSDRequest_serializeInput;

function uk_ac_ed_maths_org_optimizePortfolioSSDResponse_deserializeResponse(cxfjsutils, partElement) {
    var returnObject = uk_ac_ed_maths_org_optimizePortfolioSSDResponse_deserialize (cxfjsutils, partElement);

    return returnObject;
}
function uk_ac_ed_maths_org_optimizePortfolioMAD_op_onsuccess(client, responseXml) {
    if (client.user_onsuccess) {
     var responseObject = null;
     var element = responseXml.documentElement;
     this.jsutils.trace('responseXml: ' + this.jsutils.traceElementName(element));
     element = this.jsutils.getFirstElementChild(element);
     this.jsutils.trace('first element child: ' + this.jsutils.traceElementName(element));
     while (!this.jsutils.isNodeNamedNS(element, 'http://schemas.xmlsoap.org/soap/envelope/', 'Body')) {
      element = this.jsutils.getNextElementSibling(element);
      if (element == null) {
       throw 'No env:Body in message.'
      }
     }
     element = this.jsutils.getFirstElementChild(element);
     this.jsutils.trace('part element: ' + this.jsutils.traceElementName(element));
     this.jsutils.trace('calling uk_ac_ed_maths_org_optimizePortfolioMADResponse_deserializeResponse');
     responseObject = uk_ac_ed_maths_org_optimizePortfolioMADResponse_deserializeResponse(this.jsutils, element);
     client.user_onsuccess(responseObject);
    }
}

uk_ac_ed_maths_org_AlmPortType.prototype.optimizePortfolioMAD_onsuccess = uk_ac_ed_maths_org_optimizePortfolioMAD_op_onsuccess;

function uk_ac_ed_maths_org_optimizePortfolioMAD_op_onerror(client) {
    if (client.user_onerror) {
     var httpStatus;
     var httpStatusText;
     try {
      httpStatus = client.req.status;
      httpStatusText = client.req.statusText;
     } catch(e) {
      httpStatus = -1;
      httpStatusText = 'Error opening connection to server';
     }
     client.user_onerror(httpStatus, httpStatusText);
    }
}

uk_ac_ed_maths_org_AlmPortType.prototype.optimizePortfolioMAD_onerror = uk_ac_ed_maths_org_optimizePortfolioMAD_op_onerror;

//
// Operation {http://uk.ac.ed.maths.org}optimizePortfolioMAD
// Wrapped operation.
// parameter args0
// - Object constructor is AX21_SymbolSet
// parameter args1
// - simple type {http://www.w3.org/2001/XMLSchema}double// parameter args2
// - simple type {http://www.w3.org/2001/XMLSchema}date// parameter args3
// - simple type {http://www.w3.org/2001/XMLSchema}date//
function uk_ac_ed_maths_org_optimizePortfolioMAD_op(successCallback, errorCallback, args0, args1, args2, args3) {
    this.client = new CxfApacheOrgClient(this.jsutils);
    var xml = null;
    var args = new Array(4);
    args[0] = args0;
    args[1] = args1;
    args[2] = args2;
    args[3] = args3;
    xml = this.optimizePortfolioMADRequest_serializeInput(this.jsutils, args);
    this.client.user_onsuccess = successCallback;
    this.client.user_onerror = errorCallback;
    var closureThis = this;
    this.client.onsuccess = function(client, responseXml) { closureThis.optimizePortfolioMAD_onsuccess(client, responseXml); };
    this.client.onerror = function(client) { closureThis.optimizePortfolioMAD_onerror(client); };
    var requestHeaders = [];
    requestHeaders['SOAPAction'] = 'urn:optimizePortfolioMAD';
    this.jsutils.trace('synchronous = ' + this.synchronous);
    this.client.request(this.url, xml, null, this.synchronous, requestHeaders);
}

uk_ac_ed_maths_org_AlmPortType.prototype.optimizePortfolioMAD = uk_ac_ed_maths_org_optimizePortfolioMAD_op;

function uk_ac_ed_maths_org_optimizePortfolioMADRequest_serializeInput(cxfjsutils, args) {
    var wrapperObj = new uk_ac_ed_maths_org_optimizePortfolioMAD();
    wrapperObj.setArgs0(args[0]);
    wrapperObj.setArgs1(args[1]);
    wrapperObj.setArgs2(args[2]);
    wrapperObj.setArgs3(args[3]);
    var xml;
    xml = cxfjsutils.beginSoap11Message("xmlns:jns0='http://uk.ac.ed.maths.org' xmlns:jns1='http://uk.ac.ed.maths.org/xsd' ");
    // block for local variables
    {
     xml = xml + wrapperObj.serialize(cxfjsutils, 'jns0:optimizePortfolioMAD', null);
    }
    xml = xml + cxfjsutils.endSoap11Message();
    return xml;
}

uk_ac_ed_maths_org_AlmPortType.prototype.optimizePortfolioMADRequest_serializeInput = uk_ac_ed_maths_org_optimizePortfolioMADRequest_serializeInput;

function uk_ac_ed_maths_org_optimizePortfolioMADResponse_deserializeResponse(cxfjsutils, partElement) {
    var returnObject = uk_ac_ed_maths_org_optimizePortfolioMADResponse_deserialize (cxfjsutils, partElement);

    return returnObject;
}
function uk_ac_ed_maths_org_AlmPortType_uk_ac_ed_maths_org_AlmHttpSoap11Endpoint () {
  this.url = 'http://localhost:8080/axis2/services/Alm';
}
uk_ac_ed_maths_org_AlmPortType_uk_ac_ed_maths_org_AlmHttpSoap11Endpoint.prototype = new uk_ac_ed_maths_org_AlmPortType;
function uk_ac_ed_maths_org_AlmPortType_uk_ac_ed_maths_org_AlmHttpEndpoint () {
  this.url = 'http://localhost:8080/axis2/services/Alm';
}
uk_ac_ed_maths_org_AlmPortType_uk_ac_ed_maths_org_AlmHttpEndpoint.prototype = new uk_ac_ed_maths_org_AlmPortType;
function uk_ac_ed_maths_org_AlmPortType_uk_ac_ed_maths_org_AlmHttpSoap12Endpoint () {
  this.url = 'http://localhost:8080/axis2/services/Alm';
}
uk_ac_ed_maths_org_AlmPortType_uk_ac_ed_maths_org_AlmHttpSoap12Endpoint.prototype = new uk_ac_ed_maths_org_AlmPortType;
