<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();

$atts = array();
$atts['tagname'] = 'page';
$atts['pagesize'] = '50';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{

}
}
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv='Content-Type' content='text/html; charset=gb2312'>
<title>�Զ����������</title>
<link href="img/base.css" rel="stylesheet" type="text/css" />
</head>
<body background='img/allbg.gif' leftmargin='8' topmargin='8'>
<div class="bodytitle">
	<div class="bodytitleleft"></div>
	<div class="bodytitletxt">�Զ����������</div>
</div>

<table width="98%" border="0" cellpadding="1" cellspacing="1" align="center" class="tbtitle" style="	background:#dbe4cd;">
		<tr>
				<td bgcolor="#EDF9D5" class="tbtitletxt" background="img/tbg.gif">
				  <table width='96%' border="0" cellpadding='0' cellspacing='0'>
                  <tr>
                    <td width='30%' class="tbtitletxt">[<a href="diy_add.php"><u>�����µ��Զ������</u></a>]</td>
                    <td align='right'>
						[ͼƬ˵����
						<img src='img/manage1.gif' alt='����' />����
						<img src='img/file_del.gif' alt='ɾ��' />ɾ��
						]
                   </td>
                  </tr>
         </table>
      </td>
  </tr>
</table>

<table width="98%" border="0" cellpadding="1" cellspacing="1" align="center" class='tbtitle' style='background:#dbe4cd;margin-bottom:5px;'>
		<tr align="center" bgcolor='#FBFCE2'>
      <td>diyid</td>
		  <td>����</td>
		  <td>����</td>
		  <td>����</td>
  </tr>
		   <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
foreach( $blockValue as $key=>$fields )
{
?>
		  <tr align="center" bgcolor="#FFFFFF" onMouseMove="javascript:this.bgColor='#FCFEDA';" onMouseOut="javascript:this.bgColor='#FFFFFF';">
        <td><?php echo $fields['diyid']; ?></td>
        <td><a href="diy_list.php?action=list&diyid=<?php echo $fields['diyid']; ?>"><u><?php echo $fields['name']; ?></u></a></td>
        <td><?php echo $fields['table']; ?></td>
        <td>
         <a href='diy_edit.php?diyid=<?php echo $fields['diyid']; ?>&dopost=edit'><img src='img/manage1.gif' alt='����' /></a> |
		     <a href='diy_edit.php?diyid=<?php echo $fields['diyid']; ?>&dopost=delete'><img src='img/file_del.gif' alt='ɾ��' /></a> |
		     <a href="../plus/diy.php?action=list&diyid=<?php echo $fields['diyid']; ?>" target="_blank"><img src='img/gtk-tmp.png' title='Ԥ��' alt='Ԥ��' />ǰ̨Ԥ��</a>
		    </td>
     </tr>
		   <?php
}
?>
</table>


<table width="98%" border="0" cellpadding="5" cellspacing="1" align="center" style=" border:1px solid #dbe4cd;line-height:31px;margin:auto;">
		<tr>
			<td height="35" align="center" style="background:#F9FFE6;padding:7px 6px 6px 10px;" ><?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '6';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>
</td>
  </tr>
</table>
</body>
</html>