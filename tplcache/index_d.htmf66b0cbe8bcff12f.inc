<?php
$z[0]=Array("global","",255,281);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",325,355);
$z[1][4]['name']="cfg_description";
$z[2]=Array("global","",392,419);
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("global","",437,469);
$z[3][4]['name']="cfg_templets_skin";
$z[4]=Array("global","",570,602);
$z[4][4]['name']="cfg_templets_skin";
$z[5]=Array("global","",721,746);
$z[5][4]['name']="cfg_cmsurl";
$z[6]=Array("global","",838,864);
$z[6][4]['name']="cfg_cmspath";
$z[7]=Array("global","",951,983);
$z[7][4]['name']="cfg_templets_skin";
$z[8]=Array("global","",1071,1103);
$z[8][4]['name']="cfg_templets_skin";
$z[9]=Array("global","",1194,1226);
$z[9][4]['name']="cfg_templets_skin";
$z[10]=Array("global","",1814,1840);
$z[10][4]['name']="cfg_cmspath";
$z[11]=Array("field","",2532,2559);
$z[11][4]['name']="phpurl";
$z[12]=Array("include","",2627,2674);
$z[12][4]['filename']="&quot;head_d.htm&quot;";
$z[13]=Array("arclist","\r\n        <h2><a href=\"[field:arcurl/]\">[field:title/]</a></h2>\r\n        <p>[field:info/]...<a href=\"[field:arcurl/]\">[&#40948;&#555;]</a></p>\r\n          ",2844,3062);
$z[13][4]['flag']="h";
$z[13][4]['limit']="0,1";
$z[13][4]['infolen']="230";
$z[14]=Array("arclist","\r\n        <div class='d1arc'><a href=\"[field:arcurl/]\">[field:title/]</a></div>\r\n          ",3136,3277);
$z[14][4]['flag']="h";
$z[14][4]['limit']="1,4";
$z[15]=Array("arclist","\r\n      <li><a href=\"[field:arcurl/]\">[field:title/]</a></li>\r\n      ",3408,3536);
$z[15][4]['row']="14";
$z[15][4]['titlelen']="32";
$z[15][4]['noflag']="h";
$z[16]=Array("arclist","\r\nlinkarr[[field:global.autoindex/]] = \"[field:arcurl/]\";\r\npicarr[[field:global.autoindex/]]  = \"[field:litpic/]\";\r\ntextarr[[field:global.autoindex/]] = \"[field:title function='html2text(@me)'/]\";\r\n",4106,4350);
$z[16][4]['flag']="f";
$z[16][4]['row']="5";
$z[17]=Array("global","",4924,4954);
$z[17][4]['name']="cfg_templeturl";
$z[18]=Array("global","",5285,5315);
$z[18][4]['name']="cfg_templeturl";
$z[19]=Array("arclist","            \r\n            <li><span>[field:pubdate function=&quot;MyDate('m-d',@me)&quot;/]</span><a href=\"[field:arcurl/]\">[field:title/]</a></li>\r\n            ",5921,6146);
$z[19][4]['flag']="a";
$z[19][4]['row']="6";
$z[19][4]['orderby']="pubdate";
$z[20]=Array("arclist","\r\n          	<li><a href=\"[field:arcurl/]\">[field:image/]<span class=\"title\">[field:title/]</span></a></li>",6465,6676);
$z[20][4]['row']="10";
$z[20][4]['orderby']="pubdate";
$z[20][4]['type']="image.";
$z[20][4]['imgwidth']="143";
$z[20][4]['imgheight']="106";
$z[21]=Array("channelartlist","\r\n      <dl class=\"tbox\">\r\n        <dt><strong><a href=\"{dede:field name='typeurl'/}\">{dede:field \r\n		name='typename'/}</a></strong><span class=\"more\"><a href=\"{dede:field name='typeurl'/}\">...</a></span></dt>\r\n        <dd>\r\n          <ul class=\"d1 ico3\">\r\n          	{dede:arclist titlelen='60' row='8'}\r\n            <li><span>[field:pubdate function=&quot;MyDate('m-d',@me)&quot;/]</span><a href=\"[field:arcurl /]\">[field:title \r\n			/]</a></li>\r\n            {/dede:arclist}\r\n          </ul>\r\n        </dd>\r\n      </dl>\r\n		",6819,7386);
$z[22]=Array("arclist","\r\n            <li> <a href=\"[field:arcurl/]\">[field:title/]</a> <span><small>:</small>[field:click/]</span> <span><small>\r\n			:</small>[field:scores/]</span></li>\r\n            ",7844,8100);
$z[22][4]['orderby']="scores";
$z[22][4]['row']="8";
$z[22][4]['subday']="30";
$z[22][4]['titlelen']="42";
$z[23]=Array("feedback","\r\n            <li> <small><a href=\"#\" class=\"username\">[field:username \r\n			function=&quot;(@me=='guest' ? '��' : @me)&quot;/]</a>  <a href=\"[field:global.cfg_phpurl/]/feedback.php?aid=[field:aid/]\" class=\"title\">\r\n			[field:title/]</a></small>\r\n                <p>[field:msg/]</p>\r\n            </li>\r\n			",8223,8594);
$z[23][4]['row']="5";
$z[23][4]['titlelen']="24";
$z[23][4]['infolen']="80";
$z[24]=Array("global","",8813,8841);
$z[24][4]['name']="cfg_memberurl";
$z[25]=Array("global","",9869,9897);
$z[25][4]['name']="cfg_memberurl";
$z[26]=Array("global","",9971,9999);
$z[26][4]['name']="cfg_memberurl";
$z[27]=Array("memberlist","        \r\n                <li><a href=\"[field:spaceurl/]\" target=\"_blank\"><img src=\"[field:face/]\" alt='[field:spacename/]' width=\"52\" height=\"52\" />[field:uname/]</a></li>\r\n                ",10363,10605);
$z[27][4]['row']="6";
$z[27][4]['signlen']="30";
$z[28]=Array("arclist","\r\n          	<li class='dotline'><a href=\"[field:arcurl/]\">[field:title/]</a></li>",10963,11140);
$z[28][4]['flag']="c";
$z[28][4]['titlelen']="42";
$z[28][4]['row']="16";
$z[28][4]['tagid']="dedecms";
$z[28][4]['pagesize']="8";
$z[29]=Array("arcpagelist","",11189,11224);
$z[29][4]['tagid']="dedecms";
$z[30]=Array("arclist","\r\n          	<li class='dotline'><a href=\"[field:arcurl/]\">[field:title/]</a></li>",11492,11644);
$z[30][4]['sort']="hot";
$z[30][4]['subday']="30";
$z[30][4]['titlelen']="42";
$z[30][4]['row']="6";
$z[31]=Array("global","",11868,11893);
$z[31][4]['name']="cfg_cmsurl";
$z[32]=Array("flink","",13311,13333);
$z[32][4]['row']="24";
$z[33]=Array("include","",14008,14055);
$z[33][4]['filename']="&quot;footer.htm&quot;";

?>