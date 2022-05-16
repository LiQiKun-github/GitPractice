## C++注释及代码规范

### 1.函数注释

```c++
/** 
 * @brief 函数简要说明-测试函数
 * @param index    参数1
 * @param t        参数2 
 *
 * @return 返回说明
 *     -<em>false</em> fail
 *     -<em>true</em> succeed
 */
bool Test(int index, const CTest& t);
```



### 2.文件起始注释

```C++
/*****************************************************************************
*  xxx xxx  Co., Ltd                                                         *
*  Copyright (C) 2014 xxx xxx                                                * 
*  This program is free software; you can redistribute it and/or modify      *
*  it under the terms of the GNU General Public License version 3 as         *
*  published by the Free Software Foundation.                                *
*                                                                            *
*  You should have received a copy of the GNU General Public License         *
*  along with OST. If not, see <http://www.gnu.org/licenses/>.               *
*                                                                            *
*  Unless required by applicable law or agreed to in writing, software       *
*  distributed under the License is distributed on an "AS IS" BASIS,         *
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,                             *
*  either express or implied.                                                *
*  See the License for the specific language governing permissions and       *
*  limitations under the License.                                            *
*                                                                            *
*  @file     Example.h                                                       *
*  @brief    对文件的简述                                                      *
*  Details.                                                                  *
*                                                                            *
*  @author   Devin                                                           *
*  @email    xxxxxx@xxx.com                                                  *
*  @version  1.0.0.1(版本号)                                                  *
*  @date     2020-04-20                                                      *
*  @license  GNU General Public License (GPL)                                *
*                                                                            *
*----------------------------------------------------------------------------*
*  Remark         : Description                                              *
*----------------------------------------------------------------------------*
*  Change History :                                                          *
*   Date      |   Version | Author      | Description                        *
*----------------------------------------------------------------------------*
*  2020/04/20 | 1.0.0.1   | Devin      | Create file                         *
*----------------------------------------------------------------------------*
*                                                                            *
*****************************************************************************/
```



### 3.命名空间注释

```
/**
* @brief 命名空间的简单概述 \n(换行)
* 命名空间的详细概述
 */
namespace myns
 {
 }
```



### 4.类·枚举·结构体注释

```
/**
 * @brief 类的简单概述 \n(换行)
 * 类的详细概述
 */
class Example
 {
 };
```



```
/** 
 * @brief 简要说明文字 
 */
typedef struct 结构体名字
 {
      成员1, /*!< 简要说明文字 */ or ///<说明， /**<说明 */
      成员2, /*!< 简要说明文字 */ or ///<说明， /**<说明 */ 
      成员3, /*!< 简要说明文字 */ or ///<说明， /**<说明 */ 
 }结构体别名;
```



### 5.单行代码长度

单行代码太长折行需对齐

```
bool ksReadFile(
	void *p,
	int size,
	int *p_read_size,
	bool flags);
```



### 6.类中成员顺序

```
public:		构造函数和析构函数以及public成员函数

signals:

public slots:

private slots:

protected:		保护成员函数

private:		私有成员函数

public:			公有变量

private：		私有变量

protected:		成员变量		？？？？？
```



### 7.全局变量命名格式

```
const int MAX_LENGTH = 100;	//定义在cpp文件全局变量
```

