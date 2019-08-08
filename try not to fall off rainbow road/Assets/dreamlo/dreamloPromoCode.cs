using UnityEngine;
using System.Collections;

public class dreamloPromoCode : MonoBehaviour {

	string dreamloWebserviceURL = "http://dreamlo.com/pc/";

	public string publicCode = "";

	public string value = "";
	public string error = "";

	public enum State
	{
		None = 0,
		WaitingForResponse = 1,
		ERROR = 2,
		OK = 3
	}

	public State state = State.None;


	public static dreamloPromoCode GetSceneDreamloPromoCode()
	{
		GameObject go = GameObject.Find("dreamloPrefab");
		
		if (go == null) 
		{
			Debug.LogError("Could not find dreamloPrefab in the scene.");
			return null;
		}
		
		return go.GetComponent<dreamloPromoCode>();
	}

	public void RedeemCode(string code)
	{
		this.value = "";
		this.error = "";

		if (publicCode == "")
		{
			Debug.LogError("You forgot to set the public code variable");
			return;
		}

		string URL = dreamloWebserviceURL + publicCode + "/redeem/" + code;

		StartCoroutine(WebService(URL));
	}

	IEnumerator WebService(string URL)
	{
		this.state = State.WaitingForResponse;

		WWW www = new WWW(URL);
		yield return www;

		if (www.error != "" && www.error != null)
		{
			this.state = State.ERROR;
		}
		else {
			string s = www.text;
			if (s.Contains("|"))
			{
				string[] values = s.Split(new char[] {'|'});
				if (values[0] == "ERROR")
				{
					this.state = State.ERROR;
					this.error = values[1];
				} 
				else if (values[0] == "OK")
				{
					this.state = State.OK;
					if (values.Length > 1) this.value = values[1];
				}
			}
		}
	}

}
