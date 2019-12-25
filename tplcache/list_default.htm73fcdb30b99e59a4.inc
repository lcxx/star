<?php
$z[0]=Array("global","",236,264);
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("field","",277,296);
$z[1][4]['name']="title";
$z[2]=Array("global","",297,323);
$z[2][4]['name']="cfg_webname";
$z[3]=Array("field","",364,393);
$z[3][4]['name']="keywords";
$z[4]=Array("field","",433,491);
$z[4][4]['name']="description";
$z[4][4]['function']="html2text(@me)";
$z[5]=Array("global","",509,541);
$z[5][4]['name']="cfg_templets_skin";
$z[6]=Array("field","",839,866);
$z[6][4]['name']="phpurl";
$z[7]=Array("include","",938,973);
$z[7][4]['filename']="head.htm";
$z[8]=Array("channel","\r\n		<span><a href='[field:typeurl/]'>[field:typename/]</a></span>",1064,1240);
$z[8][4]['currentstyle']="<span><a href='~typelink~' class='thisclass'>~typename~</a></span>";
$z[9]=Array("field","",1394,1423);
$z[9][4]['name']="position";
$z[10]=Array("list","\r\n				<li>\r\n      				[field:array runphp='yes']@me = (empty(@me['litpic']) ? \"\" : \"<a href='{@me['arcurl']}' class='preview'><img src='{@me['litpic']}'/></a>\"); [/field:array]\r\n					<a href=\"[field:arcurl/]\" class=\"title\">[field:title/]</a>\r\n					<span class=\"info\">\r\n						<small>日期：</small>[field:pubdate function=\"GetDateTimeMK(@me)\"/]\r\n						<small>点击：</small>[field:click/]\r\n						<small>好评：</small>[field:scores/]\r\n					</span>\r\n					<p class=\"intro\">\r\n						[field:description/]...\r\n					</p>\r\n				</li>\r\n",1495,2054);
$z[10][4]['pagesize']="10";
$z[11]=Array("pagelist","",2160,2231);
$z[11][4]['listitem']="info,index,end,pre,next,pageno";
$z[11][4]['listsize']="5";
$z[12]=Array("arclist","\r\n          	<li><a href=\"[field:arcurl/]\">[field:title/]</a>\r\n            	<p>[field:description function='cn_substr(@me,80)'/]...</p>\r\n            </li>",2448,2658);
$z[12][4]['flag']="c";
$z[12][4]['titlelen']="42";
$z[12][4]['row']="6";
$z[13]=Array("arclist","\r\n                    	<li><a href=\"[field:arcurl/]\">[field:title/]</a></li>\r\n                    ",2868,3016);
$z[13][4]['row']="10";
$z[13][4]['orderby']="click";
$z[14]=Array("include","",3100,3137);
$z[14][4]['filename']="footer.htm";

?>