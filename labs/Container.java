package com.lab.container;

/** 
 * Класс-контейнер, позволяющий хранить произвольное количество объектов.
 * @autor kruch(HallAzzy)
*/

public class Container<T> {
	/** Класс узла односвязного списка */
	class Node {
	/** Поле данные */
	T data;
	/** Поле-указатель на следующий элемент */
	Node next;
	
    /** 
     * Конструктор - создание нового объекта
     * @see Node#Node(T)
     */
	public Node() {
		this.data = null;
		this.next = null;
		}
	
    /** 
     * Конструктор - создание нового объекта с определенным значением
     * @param data - данные
     * @see Node#Node()
     */
	public Node(T data) {
		this.data = data;
		this.next = null;
		}
	}
	
	 /** Поле размер - количество элементов в массиве */
	private int size;
	 /** Поле-указатель на начало списка */
	private Node head;
	
	/** 
     * Конструктор - создание нового объекта
     * @see Container#Container(T)
     */
	public Container() {
		this.head = null;
		this.size = 0;
	}
	
    /** 
     * Конструктор - создание нового объекта с определенным значением в узле
     * @param data - данные
     * @see Container#Container()
     */
	public Container(T data) {
		this.head = new Node(data);
		this.size = 1;
	}
	
    /** 
     * Метод добавления нового значения в конец контейнера
     * @param data - данные
     */
	public void add(T data) {
		Node newNode = new Node(data);
		
		if (head == null) {
			head = newNode;
		} else {
			Node current = head;
			while (current.next != null) {
				current = current.next;
			}
			current.next = newNode;
		}
		size++;
	}
	
    /**
     * Метод получения значения поля по индексу {@link Node#data}
     * @param index - индекс узла
     * @return возвращает данные, хранящиеся в узле
     */
	public T get(int index) {
		if (index < 0 || index >= size)
			throw new IndexOutOfBoundsException("Invalid index");
	
	Node current = head;
	for (int i = 0; i < index; i++)
		current = current.next;
	
	return current.data;
	}
	
    /** 
     * Метод удаления значения по индексу
     * @param index - индекс
     */
	public void remove(int index) {
		if (index < 0 || index >= size)
			throw new IndexOutOfBoundsException("Invalid index");

		if (index == 0)
			head = head.next;
		else {
			Node current = head;
			for (int i = 0; i < index - 1; i++) {
				current = current.next;
			}
			current.next = current.next.next;
		}
		size--;
	}
	
    /** 
     * Метод получения размера контейнера {@link Container#size}
     * @return size - количество элементов в контейнере
     */
	public int size() {
		return size;
	}
	
	 /** 
     * Метод проверки контейнера на пустоту {@link Container#size}
     * @return true или false
     */
	public boolean isEmpty() {
		return size == 0;
	}
}