

#/usr/local/Qt/6.2.3/gcc_64/include


type
  StdMap[K, V] {.importcpp: "std::map", header: "<map>".} = object
  CppString {.importcpp: "std::string", header: "<string>".} = object

proc `[]=`[K, V](this: var StdMap[K, V]; key: K; val: V) {.
  importcpp: "#[#] = #", header: "<map>".}

proc `[]`[K, V](this: var StdMap[K, V]; key: K):V {.
  importcpp: "#[#]", header: "<map>".}



proc createCppString(s:string):CppString {.
  importcpp: "#", header: "<map>".}

#"/home/lotfi/programing/nim/Importants/QTWraperCSide/qt-build/libQTWraperCSide.so"
const dynLibName = "../QTWraperCSide/build/qmake/libQTWraperCSideQmake.so"
{.link: "../QTWraperCSide/build/qmake/libQTWraperCSideQmake.so".}
const
  irr = "../QTWraperCSide/qtwrapercside.h"

#[
type
  QTWraperCSideObj {.header: irr,
                      importcpp: "QTWraperCSide".} = object
  QTWraperCSide = ptr QTWraperCSideObj
  QApplication0  {.header: irr,
                      importcpp: "QApplication".} = object
]#
echo "aaa"
type
  QApplication = pointer
  QPushButton = pointer
#[proc createDevice():cint{.
  importcpp: "createDevice(@)", header: irr.}

echo createDevice()]#
#var pp=QTWraperCSideObj()

type
  OnBtnClick = proc () {.closure.}

proc onBtnClick() =
  # has default calling convention
  echo "onBtnClickfff"



proc createApp():QApplication {.cdecl, dynlib: dynLibName, importc.}
proc runApp(app:QApplication) {.cdecl, dynlib: dynLibName, importc.}
proc createBtn(app:QApplication,s:cstring,callBack:OnBtnClick):QPushButton {.cdecl, dynlib: dynLibName, importc.}


proc createHello():cstring {.cdecl, dynlib: dynLibName, importc.}
proc getInt():cint {.cdecl, dynlib: dynLibName, importc.}

echo getInt();
var app= createApp()
var z=app.createBtn("hello from Nim 2",onBtnClick)


echo "go to run"
app.runApp()
echo "come from run"

var x: StdMap[cint, cdouble]
x[6] = 91.4

echo x[6]
echo "ssss"





#------------------\



