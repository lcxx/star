<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv='Content-Type' content='text/html; charset=<?php echo $cfg_soft_lang; ?>'>
<title>Ȧ�ӷ������</title>
<link href="img/base.css" rel="stylesheet" type="text/css" />
<script language="javascript" src="js/main.js"></script>
<script language="javascript" src="../include/dedeajax2.js"></script>
<script type="text/javascript">
<!--

function ShowAddCatalog(){
	$Obj('addCatalog').style.display='block';
}

function CloseAddCatalog(){
	$Obj('addCatalog').style.display='none';
}

function CloseEditCatalog(){
	$Obj('editCatalog').style.display='none';
}

function DelCatalog(cid){
	if(window.confirm("��ȷʵҪɾ���������ô��"))
	{
		location.href='group_store.php?action=del&id='+cid;
	}
}


function EditCatalog(cid){
	$Obj('editCatalog').style.display='block';
	var myajax = new DedeAjax($Obj('editCatalogBody'),false,true,"","","���Ժ���������...");
	myajax.SendGet2('group_store.php?catid='+cid+'&action=editload');
	DedeXHTTP = null;
}

-->
</script>
<style type="text/css">
<!--
#addCatalog {
	position:absolute;
	left:455px;
	top:64px;
	width:325px;
	height:238px;
	z-index:1;
	background-color: #F2FDDB;
	border:1px solid #889D8F;
	padding:6px;
	display:none
}
#editCatalog {
	position:absolute;
	left:455px;
	top:64px;
	width:325px;
	height:238px;
	z-index:1;
	background-color: #F2FDDB;
	border:1px solid #889D8F;
	padding:6px;
	display:none
}
-->
</style>
</head>
<body background='img/allbg.gif' leftmargin='8' topmargin='8'>

<div class="bodytitle">
	<div class="bodytitleleft"></div>
	<div class="bodytitletxt">Ȧ�ӹ���</div>
</div>

<table width="98%" border="0" cellpadding="1" cellspacing="1" align="center" class="tbtitle" style="	background:#dbe4cd;">
		<tr>
				<td bgcolor="#eef4ea" class="tbtitletxt">  <table width='96%' border="0" cellpadding='0' cellspacing='0'>
                  <tr>
                    <td width='30%' class="tbtitletxt"><strong>�����б�</strong></td>
                    <td align='right'> [<a href="javascript:ShowAddCatalog();"><u>��������</u></a>] </td>
                  </tr>
                </table></td>
  </tr>
</table>

<table width="98%" border="0" cellpadding="5" cellspacing="1" align="center" style=" border:1px solid #dbe4cd;line-height:31px;margin:auto;">
<tr>
	<td style="background:#F9FFE6;padding:7px 6px 6px 10px;" >
	<font color='red'><?php if(isset($msg)) echo $msg;?></font>
	</td>
 </tr>
<tr>
<td height="116" bgcolor="#FFFFFF" style="padding:7px 6px 6px 10px;" >
<table width='98%' border='0' cellpadding='0' cellspacing='0'>
<tr><td width='1%' height='1'></td><td width='70%'></td><td></td></tr>
<form name='frank' id='frank' action='group_store.php' method='post'>
<input type='hidden' name='action' value='uprank' />
<?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
foreach( $blockValue as $key=>$fields )
{
?>
<tr height='24' bgcolor='#FDFEF1'>
<td><input type='text' size='2' name='rank_<?php echo $fields['storeid']?>' value='<?php echo $fields['orders']?>'></td>
<td style='padding-left:3px'>��<?php echo $fields['storename']?> (id = <?php echo $fields['storeid']?>)</td>
<td align='right' style='padding-right:8px;'>
<a href='javascript:EditCatalog(<?php echo $fields['storeid']?>);'>�޸�</a> | <a href='javascript:DelCatalog(<?php echo $fields['storeid']?>);'>ɾ��</a></td></tr>
<?php
$db->SetQuery("SELECT * FROM #@__store_groups WHERE tops='".$fields['storeid']."' ORDER BY orders ASC");
$db->Execute();
while($rs = $db->GetArray()){
?>
<tr height='24'>
<td><input type='text' size='2' name='rank_<?php echo $rs['storeid']?>' value='<?php echo $rs['orders']?>'></td>
<td style='padding-left:18px'>��<?php echo $rs['storename']?> (id = <?php echo $rs['storeid']?>)</td>
<td align='right' style='padding-right:8px;'><a href='javascript:EditCatalog(<?php echo $rs['storeid']?>);'>�޸�</a> | <a href='javascript:DelCatalog(<?php echo $rs['storeid']?>);'>ɾ��</a>
</td></tr>
<?php

}
}
?>
<tr>
<td height="30" colspan="3" >
<input type='Submit' name='Submit' value='��������' style='width:80px' class="np coolbg"/></td>
</tr>
</form>
<tr bgcolor="#F8FBFB">
    <td height="26" colspan="3" align="center" bgcolor="#F9FFE6"> <?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listitem'] = 'info,index,end,pre,next,pageno';
$atts['listsize'] = '5';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>
 </td>
</tr>
</table>

</td>
</tr>
</table>
<div id="editCatalog">
<span id='editCatalogBody'>���Ժ���������...</span>
</div>
<!--  ���������ص���Ŀ���ӣ��޸ı���  -->
<div id="addCatalog">
<form name='addform' id='addform' action='group_store.php?action=add' method='post'>
<table width="100%" border="0" cellspacing="0" cellpadding="0">
            <tr>
              <td width="90" height="28">�������ƣ�</td>
              <td width="101"><input name="storename" type="text" id="storename" /></td>
              <td width="20" align="right" valign="top"><a href="javascript:CloseAddCatalog()"><img src="img/close.gif" width="12" height="12" border="0" /></a></td>
            </tr>
            <tr>
              <td height="28">�������ࣺ</td>
              <td colspan="2">
              <select name="tops" id="tops">
                <option value="0">�½���������</option>
                <?php echo $options?>
              </select>
              </td>
            </tr>
            <tr>
              <td height="28">���򼶱�</td>
              <td colspan="2"><input name="orders" type="text" id="orders" size="5" value="0" />
                ����ֵС��ǰ��</td>
            </tr>
            <tr>
              <td height="43">&nbsp;</td>
              <td colspan="2"><input type="submit" name="Submit" value="���ӷ���" class="np coolbg" style="width:80px"/></td>
            </tr>
  </table>
 </form>
</div>
</body>
</html>