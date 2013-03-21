/*******************************************************************************
* Author: Ricky Brundritt
* Website: http://rbrundritt.wordpress.com
* Date: May 21nd, 2011
* 
* Description: 
* This JavaScript file is meant to create a infobox control that is highly 
* customizable, reusable, and easy to extend. This method takes in a map 
* reference, and a set of options. 
* 
* Example Usage:
*
* var map, customInfobox;
*
* function GetMap()
* {
*	var map = new Microsoft.Maps.Map(document.getElementById("myMap"),{ credentials: "YOUR_BING_MAPS_KEY" });
*	
*	Microsoft.Maps.registerModule("CustomInfoboxModule", "scripts/V7CustomInfobox.min.js");
*	    Microsoft.Maps.loadModule("CustomInfoboxModule", { callback: function () {
*	        customInfobox = new CustomInfobox(map);
*	    }
*	});
* }
*
* //Have data be returned from data source and added to the cluster layer
* function ClusterLayer(results)
* {
* 	clusteredLayer.SetData(results);
* }
*
* function displayInfobox() {
*	customInfobox.show(map.getCenter(), "Hello World");
*}
********************************************************************************/