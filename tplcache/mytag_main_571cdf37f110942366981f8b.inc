<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?>
<html>
<head>
<meta http-equiv='Content-Type' content='text/html; charset=gb2312'>
<title>�Զ�����</title>
<link href='img/base.css' rel='stylesheet' type='text/css'>
</head>
<body background='img/allbg.gif' leftmargin='8' topmargin='8'>
<table width="98%" border="0" align="center" cellpadding="3" cellspacing="1" bgcolor="#D1DDAA">
  <tr>
   <td height="28" background="img/tbg.gif" colspan="7">
     <b>�Զ����ǹ���</b>
     &nbsp;[<a href="mytag_add.php"><u>����һ�����</u></a>]
     &nbsp;[<a href="mytag_tag_guide.php"><u>���ܱ����</u></a>]
	</td>
</tr>
  <tr align="center" bgcolor="#F9FCEF" height="24"> 
      <td width="10%">���</td>
      <td width="20%">�������</td>
      <td width="15%">������Ŀ</td>
      <td width="15%">ʱ������</td>
      <td width="20%">����ʱ��</td>
      <td width="20%">����</td>
   </tr>
   <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
foreach( $blockValue as $key=>$fields )
{
?>
    <tr align="center" bgcolor="#FFFFFF" height="24" onMouseMove="javascript:this.bgColor='#f4fbf4';"
    	 onMouseOut="javascript:this.bgColor='#FFFFFF';"> 
        <td><?php echo $fields['aid']; ?></td>
        <td><?php echo $fields['tagname']; ?></td>
        <td><?php echo TestType($fields['typename']); ?></td>
        <td><?php echo TimeSetValue($fields['timeset']); ?></td>
        <td><?php echo GetDateMk($fields['endtime']); ?></td>
        <td>
          	<a href='mytag_edit.php?aid=<?php echo $fields['aid']; ?>&dopost=edit'>����</a> | 
		        <a href='mytag_edit.php?aid=<?php echo $fields['aid']; ?>&dopost=delete'>ɾ��</a> | 
		        <a href='mytag_edit.php?aid=<?php echo $fields['aid']; ?>&dopost=getjs'>JS����</a>
		    </td>
     </tr>
		<?php
}
?>
     <tr align="center" bgcolor="#F9FCEF" height="36"> 
      <td colspan="7">
      	<?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '6';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>

      </td>
     </tr>
   </table>
   </td>
</tr>
</table>
</body>
</html>