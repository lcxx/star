<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><html>
<head>
<meta http-equiv='Content-Type' content='text/html; charset=gb2312'>
<title>֧���ӿ�����</title>
<link href="img/base.css" rel="stylesheet" type="text/css" />
<script language='javascript'>

</script>
</head>
<style>
.npvar {
	width:90%
}
</style>
<body background='img/allbg.gif' leftmargin='8' topmargin='8'>
<center>
  <table width="98%" border="0" align="center" cellpadding="3" cellspacing="1" bgcolor="#D1DDAA">
    <tr>
      <td height="28" background="img/tbg.gif" colspan="5"><table width="100%" border="0" cellspacing="0" cellpadding="0">
  <tr>
    <td><b>֧���ӿ��б�</b></td>
    <td align="right">&nbsp;<span><a href="http://bbs.dedecms.com/240053.html" target="_blank">[�鿴����ӿ�]</a></span></td>
  </tr>
</table>
</td>
    </tr>
    <tr align="center" bgcolor="#F9FCEF" height="24">
      <td width="20%">֧����ʽ</td>
      <td width="40%">����</td>
      <td width="10%">����</td>
      <td width="10%">����</td>
      <td width="20%">����</td>
    </tr>
   <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
foreach( $blockValue as $key=>$fields )
{
?>
    <tr align="center" bgcolor="#FFFFFF" height="24" onMouseMove="javascript:this.bgColor='#f4fbf4';" onMouseOut="javascript:this.bgColor='#FFFFFF';">
      <td><?php echo $fields['name']; ?></td>
      <td align="left"><?php echo $fields['description']; ?></td>
      <td><?php echo $fields['fee']; ?>Ԫ</td>
      <td><?php echo $fields['rank']; ?></td>
      <td>
        <?php
        if($fields['enabled'] == 0) {
        ?>
      	<a href='sys_payment.php?dopost=install&pid=<?php echo $fields['id']; ?>'>[��װ]</a>
        <?php
        }
        if($fields['enabled'] == 1) {
        ?>
        <a href='sys_payment.php?dopost=install&pid=<?php echo $fields['id']; ?>&pm=edit'>[����]</a>
        <a href='sys_payment.php?dopost=uninstall&pid=<?php echo $fields['id']; ?>'>[ɾ��]</a>
        <?php
        }
        ?>
      </td>
    </tr>
   <?php
}
?>
    <tr align="center" bgcolor="#F9FCEF" height="24">
      <td colspan="5"> <?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '5';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>
  </td>
    </tr>
  </table>
  </td>
  </tr>
  </table>
</center>
</body>
</html>