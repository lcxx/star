<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?>
<html>
<head>
<meta http-equiv='Content-Type' content='text/html; charset=gb2312'>
<title>����ģ�͹���</title>
<link href='img/base.css' rel='stylesheet' type='text/css'>
</head>
<body background='img/allbg.gif' leftmargin='8' topmargin='8'>
<table width="98%" border="0" align="center" cellpadding="3" cellspacing="1" bgcolor="#D1DDAA">
  <tr> 
    <td height="28" colspan="7" background="img/tbg.gif">
    	<table width='96%' cellpadding='0' cellspacing='0'>
    		<tr>
    		<td width='20%'><b>����ģ�͹���</b></td>
        <td align='right'>
    	  <a href="mychannel_add.php" class='np coolbg'>������ģ��</a>
    	  <a href="mychannel_edit.php?dopost=exportin" class='np coolbg'>����ģ��</a>
    	  <a href="stepselect_main.php" class='np coolbg'>����������</a>
        </td>
      </tr>
     </table>
    </td>
  </tr>
  <tr align="center" bgcolor="#F9FCEF" height="28"> 
      <td width="6%">id��</td>
      <td width="16%">Ƶ������</td>
      <td width="12%">ʶ��id</td>
      <td width="20%">���ӱ�</td>
      <td width="12%">״̬</td>
      <td width="8%">ģ��</td>
      <td>����</td>
   </tr>
   <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
foreach( $blockValue as $key=>$fields )
{
?>
    <tr align="center" bgcolor="#FFFFFF" height="24" 
    	onMouseMove="javascript:this.bgColor='#f4fbf4';" onMouseOut="javascript:this.bgColor='#FFFFFF';"> 
        <td><?php echo $fields['id']; ?></td>
        <td>
        	<a href='mychannel_edit.php?id=<?php echo $fields['id']; ?>&dopost=edit'><u><?php echo $fields['typename']; ?></u></a>
        </td>
        <td><?php echo $fields['nid']; ?></td>
        <td><?php echo str_replace('#@__',$cfg_dbprefix,$fields['addtable']); ?></td>
        <td><?php echo GetSta($fields['isshow'],$fields['id']); ?></td>
        <td><?php echo IsSystem($fields['issystem']); ?></td>
        <td>
         <a href='mychannel_edit.php?id=<?php echo $fields['id']; ?>&dopost=copystart'><img src='img/gtk-copy.png' title='����' alt='����' /></a> 
         <a href='mychannel_edit.php?id=<?php echo $fields['id']; ?>&dopost=gettemplets'><img src='img/gtk-tmp.png' title='ģ��' alt='ģ��' /></a> 
         <a href='mychannel_edit.php?id=<?php echo $fields['id']; ?>&dopost=export'><img src='img/gtk-ex.png' title='����' alt='����' /></a>  
         <a href='mychannel_edit.php?id=<?php echo $fields['id']; ?>&dopost=edit'><img src='img/gtk-edit.png' alt='����' title='����' /></a>  
         <a href='mychannel_edit.php?mid=<?php echo $fields['id']; ?>&dopost=modifysearch'><img src='img/gtk-search.png' alt='�Զ�������' title='�Զ�������' /></a> 
         <a href='mychannel_edit.php?id=<?php echo $fields['id']; ?>&dopost=delete'><img src='img/gtk-del.png' alt='ɾ��' title='ɾ��' /></a>
		    </td>
     </tr>
		<?php
}
?>
     <tr align="center" bgcolor="#F9FCEF" height="28"> 
      <td colspan="7">
      	<?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '5';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>

      </td>
     </tr>
     <tr align="center" bgcolor="#F2F7D7" height="32"> 
      <td colspan="7">
      	ͼ��˵����
      	<img src='img/gtk-copy.png' title='����' alt='����' /> ����
        <img src='img/gtk-tmp.png' title='ģ��' alt='ģ��' /> ģ��
        <img src='img/gtk-ex.png' title='����' alt='����' /> ����
        <img src='img/gtk-edit.png' alt='����' title='����' /> �޸�
        <img src='img/gtk-search.png' alt='�Զ�������' title='�Զ�������' /> �Զ�������
        <img src='img/gtk-del.png' alt='ɾ��' title='ɾ��' /> ɾ��
      </td>
     </tr>
   </table>
   </td>
</tr>
</table>
</body>
</html>