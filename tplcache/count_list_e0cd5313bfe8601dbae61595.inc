<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=gb2312">
<title>վ����Դ�б�</title>
<link href="css/base.css" rel="stylesheet" type="text/css">
<link href='css/tb-box.css' rel='stylesheet' type='text/css' />
<script lang='javascript' src='js/tb-box.js'></script>
<script language='javascript' src="js/main.js"></script>
<script type="text/javascript" src="js/calendar/calendar.js"></script>
<style type="text/css">
.tit div{text-align:left; height:18px; overflow: hidden; white-space: nowrap; text-overflow: ellipsis; display:block; width:300px}
.reffer {text-align:left;}
.reffer a{ float:left; margin-top:3px; padding:0 4px}
</style>
</head>
<body background='images/allbg.gif' leftmargin='8' topmargin='8'>
<table width="98%" border="0" cellpadding="2" cellspacing="1" bgcolor="#D6D6D6" align="center">

  <tr align="center" bgcolor="#ffffff"> 
    <td colspan="6" style="text-align:left; padding-left:12px">
     <form name='formsearch'>
		  �鿴����:<select name="urltype" id="urltype">
			<?php echo $urllist; ?>
		  </select>
		  �鿴��·:<select name="reffer" id="reffer">
			<?php echo $solist; ?>
		  </select>
		  IP��ַ:<input name="cip" type="text" id="cip" size="15" style="width:100px" />
      	ʱ��:<input name="day" value="<?php echo $day;?>" type="text" id="pubdate" style="width:60px">	                                  
				 <script language="javascript" type="text/javascript">
				    var showX = getElementLeft($Obj("pubdate")) - 130;
					var showY = (window.navigator.userAgent.indexOf("MSIE") >=1 )? getElementTop($Obj("pubdate")) + 35 :  getElementTop($Obj("pubdate")) + 25;
					if((window.navigator.userAgent.indexOf("MSIE 7.0") >=1 )) {
						showX = getElementLeft($Obj("pubdate"))+205;
						showY = getElementTop($Obj("pubdate"))+35;
					}
					if(window.navigator.userAgent.indexOf("MSIE 6.0")>=1)
					{
						Calendar.setup({
							inputField     :    "pubdate",
							ifFormat       :    "%Y-%m-%d",
							showsTime      :    true,
							timeFormat     :    "24"
						});
					} else {
						Calendar.setup({
							inputField     :    "pubdate",
							ifFormat       :    "%Y-%m-%d",
							showsTime      :    true,
							position       :    [showX, showY],
							timeFormat     :    "24"
						});
					}
				 </script>
			   &nbsp;
        <input type="submit" name="Submit" value="����" />
		</form>
   </td>
  </tr>
  <tr align="center" bgcolor="#FBFCE2"> 
    <td width="36">ID</td>
    <td width="120">ʱ��</td>
    <td width="90">����IP</td>
    <td width="40">λ��</td>
    <td width="300">����ҳ</td>
    <td>��·ҳ��</td>
  </tr>
  <form name="form1">
<?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{
?>
    <tr align="center" bgcolor="#FFFFFF" height="26" align="center" onMouseMove="javascript:this.bgColor='#FCFDEE';" onMouseOut="javascript:this.bgColor='#FFFFFF';"> 
      <td>
      	<?php echo $fields['id']; ?>
      </td>
      <td class="time"> 
        <?php echo MyDate('Y.m.d H:i:s',$fields['dateline']); ?>
      </td>
      <td style="text-align:left">
        <a href="http://www.baidu.com/baidu?word=<?php echo $fields['ip']; ?>&ch=3" target="_blank"><?php echo $fields['ip']; ?></a>
      </td>
       <td title="<?php echo $fields['aid']; ?>">
     	<?php echo wz($fields['aid']); ?>
      </td>
     <td class="tit">
      <div><a target="_blank" href="<?php echo $fields['url']; ?>"><?php echo str_replace('_����С������','',$fields['tit']); ?></a></div>
      </td>
      <td class="reffer">
     	<a href="<?php echo furl($fields['reffer']); ?>" target="_blank"><?php echo toIco($fields['reffer']); ?></a> <input class="np" type="text" value="<?php echo furl($fields['reffer']); ?>" name="t1" style="width:400px" />
      </td>
    </tr>
<?php
}
}?>
  </form>
  <tr bgcolor="#F9FCEF"> 
    <td height="24" colspan="6" align="center"> 
      <?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '5';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>

    </td>
  </tr>
</table>
</body>
</html>