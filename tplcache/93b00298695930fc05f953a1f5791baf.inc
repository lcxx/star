--{dede:list  pagesize='30' col='1' titlelen='60' orderby='pubdate' orderway='desc' 
 channel='1' }<li>
   [field:imglink/]
    [field:textlink/]
    <span class="info">
        <small>���ڣ�</small>[field:pubdate function="getdatemk(@me)"/]
        <small>�����</small>[field:click/]
        <small>������</small>[field:scores/]
    </span>
    <p class="intro"> [field:description/]...</p>
    </li>{/dede:list}--