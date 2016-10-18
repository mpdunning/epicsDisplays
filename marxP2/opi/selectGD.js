importPackage(Packages.org.csstudio.opibuilder.scriptUtil);
importPackage(Packages.org.csstudio.opibuilder.util);
importPackage(Packages.org.csstudio.opibuilder.runmode);
importPackage(Packages.java.util);

var macroValue = PVUtil.getString(pvArray[0]);
var hashMap = new LinkedHashMap();
hashMap.put("GDPV", macroValue);
var macroInput = new MacrosInput(hashMap, true);
widgetController.setPropertyValue("macros", macroInput);
widgetController.getWidgetModel().getProperty("opi_file").
	setPropertyValue(widgetController.getPropertyValue("opi_file"), true);
