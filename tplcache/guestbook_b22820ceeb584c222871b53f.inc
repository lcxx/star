<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=gb2312" />
<title><?php echo $cfg_webname; ?> - ���߱���</title>
<link href="/images/style.css" rel="stylesheet" type="text/css" media="screen" />
<style>
body{ background:#FFF; text-align:left;font:12px/150% Verdana}
dl{ height:24px;width:630px; clear:both;padding:3px 0 0 0}
dl.txt{ height:96px}
dt{ float:left;width:96px; text-align:right}
dd{ float:left;width:75%;}
input { }
label{padding:0 2px 0 0}
.TR{ width:90px; text-align:right}
td{ border:1px gray solid;padding:2px 6px}
ul,li{ display:inline;margin:0;padding:0}
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
</script>
</head>
<body>


<?php
if(!empty($_GET['gotopagerank'])){
?><p>
�����������߱��������</p>
  <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
foreach( $blockValue as $key=>$fields )
{
?>

 <dl><dt>No. <?php echo $fields['id']; ?></dt><dd>��¼��ʱ�䣺<?php echo MyDate('Y-m-d H:i',$fields['dtime']); ?>
 </dd></dl>
 <table cellpadding="0" style="width: 90%;border-collapse: collapse;">
	<tr>
		<td class="TR">��ʵ������</td><td style="width:40%"><?php echo $fields['uname']; ?></td>
		<td class="TR">�Ļ��̶ȣ�</td><td><?php echo $fields['face']; ?></td>
	</tr>
	<tr>
		<td class="TR">����רҵ��</td><td><?php echo $fields['title']; ?></td>
		<td class="TR">�������䣺</td><td><?php echo $fields['email']; ?></td>
	</tr>
	<tr>
		<td class="TR">�ֻ����룺</td><td><?php echo $fields['mid']; ?></td>
		<td class="TR">�������룺</td><td><?php echo $fields['tid']; ?></td>
	</tr>
	<tr>
		<td class="TR">����ѧʿѧλ��</td><td><?php echo $fields['qq']; ?></td>
		<td class="TR">�Ա�</td><td><?php echo $fields['sex']; ?></td>
	</tr>
	<tr>
		<td class="TR">��Ϣ��Դ��</td><td colspan="3"><?php echo $fields['homepage']; ?></td>
	</tr>
	<tr>
		<td class="TR">��ѯ���⣺</td><td colspan="3"><?php echo $fields['msg']; ?></td>
	</tr>
</table>

 <dl><dt> <a style="display:none" href='?action=admin&id=<?php echo $fields['id']; ?>&job=del' style="color:red">[ɾ��]</a> IP��ַ��</dt><dd><a href="http://www.ip.cn/?ip=<?php echo $fields['ip']; ?>" target="_blank"><?php echo $fields['ip']; ?></a></dd></dl>
<div style="height:20px;overflow:hidden;"><strong> ��д������ҳ�棺</strong><a href="<?php echo $fields['url']; ?>" target="_blank"><?php echo $fields['url']; ?></a></div>
<div style="height:24px;overflow:hidden;"><strong> ϵͳ��⵽����Դ��</strong><a style="color:red" href="<?php echo $fields['seo']; ?>" target="_blank"><?php echo $fields['seo']; ?></a></div>
<hr style="width:150px" />

    <?php
}

$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '5';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 

}
else{
?>
      <form method="post" action="?zhuanhan=true#" name="form1">
<dl><dt></dt><dd><b>����ʵ��ϸ��д�±����Է���������ϵ���ύ����˵������Ϣ</b></dd></dl>
<table cellpadding="0" style="width: 100%;border-collapse: collapse;">
	<tr>
		<td class="TR">��ʵ������</td><td><input type="text" maxlength="10" name="uname" value="<?php echo $g_name; ?>" class="ipt-txt"/></td>
		<td class="TR">�Ļ��̶ȣ�</td><td><input name="face" value="" /></td>
	</tr>
	<tr>
		<td class="TR">����רҵ��</td><td><input type="text" maxlength="50" name="title" class="ipt-txt"/></td>
		<td class="TR">�������䣺</td><td><input maxlength="80" type="text" name="email" class="ipt-txt"/></td>
	</tr>
	<tr>
		<td class="TR">�ֻ����룺</td><td><input name="mid" id="" value="" /></td>
		<td class="TR">�������룺</td><td><input name="tid" id="" value="" /></td>
	</tr>
	<tr>
		<td class="TR">��ѯ���⣺</td><td colspan="3"><textarea name="msg" cols="60" rows="5" class="textarea ipt-txt"></textarea></td>
	</tr>
	<tr>
		<td class="TR">����ѧʿѧλ��</td><td><input name="qq" type="radio" id="x1" value="��" /><label for="x1">��</label><input name="qq" type="radio" id="x2" value="��" /><label for="x2">��</label></td>
		<td class="TR">�Ա�</td><td><input name="sex" type="radio" id="s1" value="��" /><label for="s1">��</label><input name="sex" type="radio" id="s2" value="Ů" /><label for="s2">Ů</label></td>
	</tr>
	<tr>
		<td class="TR">��Ϣ��Դ��</td><td colspan="3" onmouseover="getlaiyuan()" onkeyup="getlaiyuan()">
		<input name="laiyuan" type="checkbox" value="baidu" id="l1" /><label for="l1">baidu</label>
		<input name="laiyuan" type="checkbox" value="google" id="l2" /><label for="l2">google</label>
		<input name="laiyuan" type="checkbox" value="����" id="l3" /><label for="l3">����</label>
		<input name="laiyuan" type="checkbox" value="��̳" id="l4" /><label for="l4">��̳</label>
		<input name="laiyuan" type="checkbox" value="��ֽ" id="l5" /><label for="l5">��ֽ</label>
		<input name="laiyuan" type="checkbox" value="��������" id="l6" /><label for="l6">��������</label>
		<input name="laiyuan" type="checkbox" value="���ѽ���" id="l7" /><label for="l7">���ѽ���</label><br />
		<input name="laiyuan" type="checkbox" value="ֱ��������ַ" id="l8" /><label for="l8">ֱ��������ַ</label>
		<input name="laiyuan" type="checkbox" value="����" onclick="show(this)" id="l9" /><label for="l9">����</label>
		<input name="other" id="other" size="38" style="display:none" value="" />
		<input type="hidden" value="" name="homepage" id="homepage" />
		<input type="hidden" value="<?php echo $_COOKIE['seo'];?>" name="seo" id="seo" />
		<input type="hidden" value="<?php echo $_GET['url'];?>" name="url" id="url" />
		</td>
	</tr>
</table>
        <input type='hidden' name='action' value='save' />
<dl><dt></dt><dd><input maxlength="1000" type="submit" name="Submit" value="�� ��" class="btn-2" />
<input type="reset" name="Submit2" value="ȡ ��" class="btn-2" /></dd></dl>
      </form>
<?php
}
?>

      </body>
</html>