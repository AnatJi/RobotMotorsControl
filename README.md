Practical work [https://github.com/AnatJi/RobotMotorsControl]
Целью проекта является освоение навыков работы с Git, а также создание скрипта управления моторами на плате ардуина, используя драйвер L298N.


# Отчет о работе:


## 1) создан Git-репозиторий для проекта:

На главной странице GitHub нажали на значок "+" в правом верхнем углу и выбрали `New repository`.

 Заполнили поля:
- Repository name: "RobotMotorsControl"
- Выбрали видимость репозитория: `Public`.
- Завершили нажатием кнопки: `Create repository`.

Затем клонировали репозиторий на локальный в выбранную папку компьютер командой:
```
git clone git@github.com:AnatJi/RobotMotorsControl.git
```
(Ввода пароля не требуется, поскольку настроен вход по ключу SSH.)


## 2) Создание скрипта, файла README.md и их отправка на удаленный сервер:

Используя редвктор `Vim` создаем два файла:
- README.md
- motors_control.ino 

Затем добавляем файлы в индекс, коммитим и отправляем на сервер командами:
```
git add (имя файла)
git commit -m "место для комментария коммита"
git push -u origin master
```

## 3) Создание новой ветки и слияние:

добавление новой ветки осуществляем командой:
```
git checkout -b (имя новой ветки)
```
(в результате новая ветка с копией уже существующих файлов основной ветки)

Для переключения на новую ветку и перехода между ними используется команда:
```
git checkout (имя ветки)
```

Для проверки статуса и выбранной ветки используются команды:
```
git status
git branch
```

После внесения изменений в файлы повторно добавляем их в индекс, коммитим и пушим на удаленный сервер. Изменения сохранятся лишь на выбранную ветку

Для слияния необходимо:
- Переключиться на главную ветку.
- выполнить слияние командой `git merge (имя ветки которую присоединяем)`
(Однако перед слиянием необходимо создать пулл реквест для согласования изменений со всем участниками проекта до слияния.)

## 4) Создание пул-реквеста:

- На основной странице проекта заходим во вкладку `Pull requests`
- Затем используем вкладку `New pull request`
- Выбираем ветку для слияния и пишем описания и пишем комментарий, после чего можно будет согласовать изменения перед слиянием.

