importPackage(Packages.org.csstudio.opibuilder.scriptUtil);
importPackage(Packages.org.csstudio.opibuilder.util);
importPackage(Packages.org.csstudio.opibuilder.runmode);
importPackage(Packages.java.util);

var flagName = "firstRun";
if(widgetController.getExternalObject(flagName) == null){
	widgetController.setExternalObject(flagName, false);
	ConsoleService.getInstance().writeInfo("in popDisp.js: got null");
}else{
	ConsoleService.getInstance().writeInfo("in popDisp.js: got not null");
	var macroValue = PVUtil.getString(pvArray[0]);
	ConsoleService.getInstance().writeInfo("in popDisp.js: macroValue="+macroValue);
	var hashMap = new LinkedHashMap();
	hashMap.put("pv", macroValue);
	var macroInput = new MacrosInput(hashMap, true);
	
	RunModeService.getInstance().runOPI(ResourceUtil.getPathFromString(
		widgetController.getPropertyValue("opi_file")), 
		RunModeService.TargetWindow.SAME_WINDOW, null, macroInput);

}