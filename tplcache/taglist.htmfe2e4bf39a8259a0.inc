<?php
$z[0]=Array("global","",212,240);
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("field","",335,354);
$z[1][4]['name']="title";
$z[2]=Array("global","",355,381);
$z[2][4]['name']="cfg_webname";
$z[3]=Array("field","",422,451);
$z[3][4]['name']="keywords";
$z[4]=Array("field","",491,549);
$z[4][4]['name']="description";
$z[4][4]['function']="html2text(@me)";
$z[5]=Array("include","",870,917);
$z[5][4]['file']="inc/top.htm";
$z[5][4]['ismake']="yes";
$z[6]=Array("global","",1038,1063);
$z[6][4]['name']="cfg_cmsurl";
$z[7]=Array("field","",1116,1136);
$z[7][4]['name']="title";
$z[8]=Array("list","\r\n<dl>\r\n	[field:array runphp='yes']@me = (empty(@me['litpic']) ? \"\" : \"<dt class=\\\"img\\\"><a href=\\\"{@me['arcurl']}\\\"><img onload=\\\"hideno(this)\\\" alt=\\\"\\\" src=\\\"{@me['litpic']}\\\"/></a></dt>\"); [/field:array]\r\n	<dt><a href=\"[field:arcurl/]\" class=\"tit\">[field:title/]</a> </dt>\r\n	<dd>[field:description/]...¡¡<span>_[field:pubdate function=\"GetDateMK(@me)\"/]</span>¡¡<a href=\"[field:arcurl/]\">ÏêÏ¸&gt;&gt;</a></dd>\r\n</dl>\r\n",1185,1663);
$z[8][4]['orderby']="sortrank";
$z[8][4]['pagesize']="10";
$z[9]=Array("pagelist","",1697,1775);
$z[9][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[9][4]['listsize']="5";
$z[10]=Array("myad","",1907,1938);
$z[10][4]['name']="lianxiWomen";
$z[11]=Array("channel","\r\n<li><a href=\"[field:typeurl/]\">[field:typename/]</a></li>",2036,2209);
$z[11][4]['type']="son";
$z[11][4]['currentstyle']="<li><a href=\"~typelink~\" class=\"Hover\">~typename~</a></li>";
$z[12]=Array("field","",2302,2329);
$z[12][4]['name']="phpurl";
$z[13]=Array("myad","",2634,2665);
$z[13][4]['name']="rightCourse";
$z[14]=Array("include","",2784,2834);
$z[14][4]['file']="inc/footer.htm";
$z[14][4]['ismake']="yes";

?>