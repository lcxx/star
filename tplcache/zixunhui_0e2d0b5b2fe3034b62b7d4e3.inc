<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=gb2312" />
<title><?php echo $cfg_webname; ?> - ���߱���</title>
<link href="/images/style.css" rel="stylesheet" type="text/css" media="screen" />
<script type="text/javascript" src="http://i.haiwen.net/js/jquery.min.js"></script>
<style>
body{ background:#FFF; text-align:left;font:12px/150% Verdana}
dl{ height:24px;width:630px; clear:both;padding:3px 0 0 0}
dl.txt{ height:96px}
dt{ float:left;width:96px; text-align:right}
dd{ float:left;width:75%;}
.TR{ width:90px; text-align:right}
td{ border:1px gray solid;padding:2px 6px}
ul,li{ display:inline;margin:0;padding:0}
.TClass thead{ font-weight:bold; text-align:center;}
#pages{ text-align:center; padding:10px 0;}
</style>
<script type="text/javascript">
function show(o){
if(o.checked==true)document.getElementById('other').style.display='';
else document.getElementById('other').style.display='none';

}
function getlaiyuan(){
str='';
for(i=1;i<=8;i++){
	o=document.getElementById('l'+i);
	if(o.checked==true)str+=o.value+'|';
	else str=str.replace(o.value+'|',"");
}
document.getElementById('homepage').value=str+document.getElementById('other').value;
}

$(function(){
	$("tbody>tr:odd").css("background-color","#e6e6e6");
});
</script>
</head>
<body>
<p>���������߱��������</p>

  <table cellpadding="0" style="width: 90%;border-collapse: collapse;" class="TClass">
  <thead>
    <tr>
      <td>���</td>
      <td>¼��ʱ��</td>
      <td>����</td>
      <td>����רҵ</td>
      <td>�ֻ�����</td>
      <td>��������</td>
      <td>IP��ַ</td>
      <td colspan="2">���ݴ���</td>
    </tr>
   </thead>
<?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{
?>
	<tbody>    
	<tr>
      <td>No. <?php echo $fields['id']; ?></td>
      <td><?php echo MyDate('Y-m-d H:i',$fields['dtime']); ?></td>
      <td><?php echo $fields['uname']; ?></td>
      <td><?php echo $fields['title']; ?></td>
      <td><?php echo $fields['mid']; ?></td>
      <td><?php echo $fields['tid']; ?></td>
      <td><a href="http://www.ip.cn/?ip=<?php echo $fields['ip']; ?>" target="_blank"><?php echo $fields['ip']; ?></a></td>
      <td>ɾ��</td>
      <td>�༭</td>
    </tr>
	<tr>
	  <td>����ҳ��</td>
	  <td colspan="3"><a href="<?php echo $fields['currentPage']; ?>" target="_blank"><?php echo $fields['currentPage']; ?></a></td>
	  <td>������Դ</td>
	  <td colspan="4" width="400px"><a style="color:red" href="<?php echo $fields['fromUrl']; ?>" target="_blank"><?php echo $fields['fromUrl']; ?></td>
    </tr>
    </tbody>
<?php
}
}?>
 </table> 
<div id="pages"><?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '5';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>
</div> 
</body>
</html>