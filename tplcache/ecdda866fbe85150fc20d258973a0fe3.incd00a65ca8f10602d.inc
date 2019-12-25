<?php
$z[0]=Array("match","<td height=\"200\" valign=\"top\"><br>[内容]</td>\r\n              </tr>\r\n              <tr>\r\n                <td height=\"30\">",5,150);
$z[1]=Array("trim","<span([^>]*)>",155,202);
$z[1][4]['replace']="";
$z[2]=Array("trim","</span>",204,245);
$z[2][4]['replace']="";
$z[3]=Array("trim","<FONT([^>]*)>",247,294);
$z[3][4]['replace']="";
$z[4]=Array("trim","</FONT>",296,337);
$z[4][4]['replace']="";
$z[5]=Array("trim","来源：人大新闻网",339,389);
$z[5][4]['replace']="";
$z[6]=Array("trim","</TD></TR></TBODY></TABLE>",391,451);
$z[6][4]['replace']="";
$z[7]=Array("trim","<TABLE width=\"100%\">([^>]*)<TD style=\"PADDING-BOTTOM: 20px; LINE-HEIGHT: 22px; PADDING-LEFT: 20px; PADDING-RIGHT: 20px; FONT-SIZE: 10.5pt; TEXT-DECORATION: none\" vAlign=top width=\"90%\" align=left>",453,683);
$z[7][4]['replace']="";
$z[8]=Array("function","",688,719);

?>