## Задание 1

### «Очередь клиентов»

Вам необходимо создать приложение, имитирующее очередь в окошко. Для этого необходимо создать два потока работающие с одной разделяемой переменной.

Первый поток имитирует клиента: раз в секунду он обращается к счетчику клиентов и увеличивает его на 1. Максимальное количество клиентов должно быть параметризировано.

Второй поток имитирует операциониста: раз в 2 секунды он обращается к счетчику клиентов и уменьшает его на 1. «Операционист» работает до последнего клиента.
