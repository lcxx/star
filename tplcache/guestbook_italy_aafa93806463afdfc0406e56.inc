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
<script language="JavaScript">
function xxg()
{
    if (form1.uname.value=="")
    {
    	alert("��û��������");
    	document.form1.uname.focus();
    	return false;
    }
    if (form1.address.value=="")
    { 
    	alert("��û�����ַ");
    	document.form1.address.focus();
    	return false;
    }
    if (form1.select_specialty.value=="0")
    {
    	alert("��ѡ��һ��רҵ");
    	return false;
	}
    if (form1.mobile.value=="")
    { 
    	alert("��û�����ֻ��绰");
    	document.form1.mobile.focus();
    	return false;
    }
    if (form1.mobile.value.length<7 || form1.mobile.value.length>13)
    { 
    	alert("�ֻ��绰��ʽ����ȷ");
    	document.form1.mobile.focus();
    	return false;
    }
	 
return true;

}
</script>
<style type="text/css">
td {
    border:1px solid #CCCCCC;
}
</style>
</head>
<body style="padding-left:20px;">


<?php
if(!empty($_GET['gotopagerank'])){
?><p>
�������� <font color="blue">����������ѧ</font> ���߱��������<a href="/hw-ruc/report_italy.php">[��������]</a></p>
  <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{
?>

 <dl><dt>ID&nbsp;:&nbsp;<?php echo $fields['id']; ?></dt><dd>��¼��ʱ�䣺<font color="#3366CC"><?php echo MyDate('Y-m-d H:i',$fields['dtime']); ?></font>
 </dd></dl>
<table cellpadding="0" style="width: 90%;border-collapse: collapse;">
	<tr>
		<td class="TR">������</td>
		<td style="width:40%"><font color="#3366CC"><?php echo $fields['uname']; ?></font></td>
		<td class="TR">���ѧ����</td>
		<td><font color="#3366CC"><?php echo $fields['education']; ?></font></td>
	</tr>
	<tr>
		<td class="TR">�Ա�</td>
		<td><font color="#3366CC"><?php echo $fields['sex']; ?></font></td>
		<td class="TR">ѧʿѧλ��</td>
		<td><font color="#3366CC"><?php echo $fields['diploma']; ?></font></td>
	</tr>
	<tr>
		<td class="TR">�ֻ����룺</td>
		<td><font color="#3366CC"><?php echo $fields['mobile']; ?></font></td>
		<td class="TR">��ҵԺУ��</td>
		<td><font color="#3366CC"><?php echo $fields['graduate_school']; ?></font></td>
	</tr>
	<tr>
		<td class="TR">Email��</td>
		<td><font color="#3366CC"><?php echo $fields['email']; ?></font></td>
		<td class="TR">��ѧרҵ��</td>
		<td><font color="#3366CC"><?php echo $fields['learning_specialty']; ?></font></td>
	</tr>
	<tr>
		<td class="TR">��ַ��</td>
		<td><font color="#3366CC"><?php echo $fields['address']; ?></font></td>
	    <td class="TR">�������֣�</td>
	    <td><font color="#3366CC"><?php echo $fields['language']; ?></font></td>
	</tr>
	<tr>
		<td class="TR">������רҵ��</td>
		<td colspan="3"><font color="#3366CC"><?php echo $fields['select_specialty']; ?></font></td>
	</tr>
	<tr>
		<td class="TR">��ѯ���ԣ�</td>
		<td colspan="3"><font color="#3366CC"><?php echo nl2br(htmlentities($fields['questioninfo'],ENT_QUOTES,GB2312)); ?></font></td>
	</tr>
</table>

 <dl><dt> <a style="display:none" href='?action=admin&id=<?php echo $fields['id']; ?>&job=del' style="color:red">[ɾ��]</a> IP��ַ��</dt><dd><a href="http://www.ip.cn/?ip=<?php echo $fields['ip']; ?>" target="_blank"><?php echo $fields['ip']; ?></a></dd></dl>
<div style="height:20px;overflow:hidden;"><strong> ��д������ҳ�棺</strong><a href="<?php echo $fields['url']; ?>" target="_blank"><?php echo $fields['url']; ?></a></div>
<div style="height:24px;overflow:hidden;"><strong> ϵͳ��⵽����Դ��</strong><a style="color:red" href="<?php echo $fields['seo']; ?>" target="_blank"><?php echo $fields['seo']; ?></a></div>
<hr style="width:150px" />

    <?php
}
}
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '5';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 

}
else{
?>
<!-- �������� ��ʼ -->
<div class="biao">
<form onsubmit="return xxg();" method="post" action="/plus/guestbook_italy.php" name="form1" id="form1">
<ul>
<li class="L"><span>*</span>������</li>
<li class="R"><input type="text" msg="�ַ����ȱ���Ϊ0��30λ" max="30" min="0" datatype="limit" require="false" id="uname" name="uname"><span>������д��ʵ������</span></li>
<li class="L"><span>*</span>�Ա�</li>
<li class="R"><label><input type="radio" style="border: 0px none;" value="��" id="sex" name="sex"> ��</label> <label><input type="radio" style="border: 0px none;" value="Ů" id="sex" name="sex"> Ů</label></li>
<li class="L"><span>*</span>�ֻ���</li>
<li class="R"><input name="mobile" id="mobile" onkeyup="value=value.replace(/\D+/g,'')"><span>������д��ȷ����ϵ��ʽ����������������ϵ��</span></li>
<li class="L"><span>*</span>Email��</li>
<li class="R"><input name="email" id="email"></li>
<li class="L">��ַ��</li><li class="R"><input name="address" id="address"><span>������д��ס��ַ��</span></li>
<li class="L"><span>*</span>רҵ��</li>
<li class="R"><select name="select_specialty" id="select_specialty">
<option selected="selected" value="">��ѡ��</option>
<option value="���ڱ��վ�������չ���רҵ">���ڱ��վ�������չ���רҵ</option>
<option value="��Դ����רҵ">��Դ����רҵ</option>
</select>
<span>������д��Ҫ������רҵ��</span>
</li>
<li class="L">���ѧ����</li><li class="R"><input type="radio" name="education" value="��ѧ����" style="border: 0px none;"> 
						��ѧ���� <input type="radio" name="education" value="��������" style="border: 0px none;">
						�������� <input type="radio" name="education" value="����" style="border: 0px none;"> ����
						</li>
<li class="L"><span>*</span>ѧʿѧλ��</li><li class="R"><input type="radio" name="diploma" value="�ѻ��" style="border: 0px none;"> 
						�ѻ�� <input type="radio" name="diploma" value="2011����" style="border: 0px none;">
						2011���� <input type="radio" name="diploma" value="����" style="border: 0px none;"> 
						����
						</li>

<li class="L"><span>*</span>��ҵԺУ��</li><li class="R"><input type="text" ;="" id="graduate_school" name="graduate_school"></li>
<li class="L">��ѧרҵ��</li><li class="R"><input type="text" ;="" id="learning_specialty" name="learning_specialty"></li>
<li class="L">�������֣�</li><li class="R"><input type="checkbox" value="Ӣ��" name="language">Ӣ��
<input type="checkbox" value="�������" name="language">�������
<input type="checkbox" value="��������" name="language">��������
<input type="checkbox" value="����" name="language">����
<input type="checkbox" value="����" name="language">����
<input type="checkbox" value="����" name="language">����
<input type="checkbox" value="����" name="language">����
<input type="checkbox" value="���������" name="language">���������
</li>
<li class="L">��ѯ���ԣ�</li><li class="R"><textarea id="questioninfo " name="questioninfo" style="width:480px; height:130px"></textarea></li>

</ul>
<div class="tijiao">��׼ȷ��д���б������ǻᾡ�찲����ʦΪ��������⡣��ѯ���ߣ�<font color="#cc0000">010��82500131 </font></div>
<div class="tijiao"><input type="hidden" value="" name="seo" id="seo" /><!--�����Դ-->
<input type="hidden" value="" name="url" id="url" /><!--�ύҳ��--><input type='hidden' name='action' value='save' />
<input type="submit" class="btn" value="�ύ" name="Submit"></div>
</form>
</div>
<!-- �������� ���� -->
<?php
}
?>
      </body>
</html>