
                [field:pagestyle runphp='yes'] @me= (@me==3 ? '<li>' : '');[/field:pagestyle]
                <p><a class="img" href='[field:linkurl/]' [field:pagestyle runphp='yes'] @me= (@me==3 ? 'class="pic"' : ''); [/field:pagestyle]>
                  <img src='[field:imgsrc/]' id='bigimg' [field:imgwidth /] alt='[field:alttext /]' border='0' /></a><br />
                <a href='[field:linkurl/]' [field:pagestyle runphp='yes']@me = (@me==3 ? 'class="title"' : '');[/field:pagestyle]>
                	[field:alttext /]
                </a></p>
                [field:pagestyle runphp='yes'] @me = (@me==3 ? '</li>' : ''); [/field:pagestyle]
             