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
<title>��Աģ�͹���</title>
<link href="img/base.css" rel="stylesheet" type="text/css" />
</head>
<body background='img/allbg.gif' leftmargin='8' topmargin='8'>
<div class="bodytitle">
  <div class="bodytitleleft"></div>
  <div class="bodytitletxt">��Աģ�͹���</div>
</div>
<table width="98%" border="0" cellpadding="1" cellspacing="1" align="center" class="tbtitle" style="	background:#E2F5BC;">
  <tr>
    <td bgcolor="#EDF9D5" class="tbtitletxt" background="img/tbg.gif"><table width='96%' border="0" cellpadding='0' cellspacing='0'>
        <tr>
          <td width='30%' class="tbtitletxt">[<a href="member_model_add.php"><u>���ӻ�Աģ��</u></a>]</td>
          <td align='right'> [ͼƬ˵����
            ����] </td>
        </tr>
      </table></td>
  </tr>
</table>
<table width="98%" border="0" cellpadding="1" cellspacing="1" align="center" class='tbtitle' style='background:#E2F5BC;margin-bottom:5px;'>
  <tr align="center" bgcolor='#FBFCE2'>
    <td>ID��</td>
    <td>ģ������</td>
    <td>����</td>
    <td>��Ա��</td>
    <td>����״̬</td>
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
    <td><?php echo $fields['id']; ?></td>
    <td><a href="member_main.php?mtype=<?php echo $fields['name']; ?>" title="<?php echo $fields['description']; ?>"><u><?php echo $fields['name']; ?></u></a><?php if($fields['issystem']==1){ ?><font color=red>[*]</font><?php } ?></td>
    <td><?php echo $fields['table']; ?></td>
    <td><?php echo GetTotalMember($fields['table']); ?></td>
    <td> <?php if($fields['state']==0){ ?> <font color=red>[��]Off</font> <?php
}
else{
?> <font color=green>[��]On</font> <?php } ?> </td>
    <td><a href='member_model_edit.php?id=<?php echo $fields['id']; ?>&dopost=edit'>�༭</a> | <a href='member_model_edit.php?id=<?php echo $fields['id']; ?>&dopost=copy'>����</a> | <a href='member_model_edit.php?id=<?php echo $fields['id']; ?>&dopost=disabled'><?php if($fields['state']==0){ ?>����<?php
}
else{
?>����<?php } ?></a> | <a href='member_model_edit.php?id=<?php echo $fields['id']; ?>&dopost=delete'>ɾ��</a></td>
  </tr>
  <?php
}
?>
</table>
<table width="98%" border="0" cellpadding="5" cellspacing="1" align="center" style=" border:1px solid #E2F5BC;line-height:31px;margin:auto;">
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